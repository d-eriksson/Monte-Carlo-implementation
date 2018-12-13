#include "Camera.h"



Camera::Camera(int w, int h)
{
	width = w;
	height = h;
	eye1 = glm::vec3(-0.1f, 0.0f, 0.0f);
	eye2 = glm::vec3(-1.0f, 0.0f, 0.0f);
	pixels.reserve(w*h);
}
void Camera::createPixels(Scene &S)
{
	glm::vec3 rayDir;
	glm::vec3 CameraPlanePosition;
	double PixelWidth = 2/double(width);
	double y;
	double z;
	Ray ray = Ray(glm::vec3(0,0,0),glm::vec3(0,0,0));
	for(int i = 0; i < width*width; ++i){
		y = (-1.0 + PixelWidth/2) + PixelWidth*(i%width);
		z = (1.0 - PixelWidth/2) - PixelWidth*(i/width);
		CameraPlanePosition = glm::vec3(0.0,y,z);

		rayDir =  CameraPlanePosition - eye1;
		ray= Ray(eye1, rayDir);
		std::cout<< rayDir.x << ", " << rayDir.y << ", " << rayDir.z << std::endl;
		//std::cout << "(" << ray.direction.x << ", " <<ray.direction.y <<", "<<ray.direction.z << " )" << std::endl;
		S.triangleIntersect(&ray);
		Pixel *p = new Pixel();
		p->addRay(ray);
		p->setColorDoubleFromRayList();
		pixels.push_back(*p);

		delete p;
	}
}
void Camera::saveImage(std::string filename){
	/*std::ofstream file;
	file.open(filename, std::ios::out | std::ios::binary);
	if(!file){
		std::cout<<"ERROR!" << std::endl;
	}
	file << "P6"<<"\n";
	file << width << "\n";
	file << height << "\n";
	file << "255" << "\n";
	size_t size = width*height;
	std::vector<unsigned char> temp(size *3);
	for (int i = 0; i < size; i++){
		temp[i*3] = static_cast<unsigned char>(pixels[i].getColorDouble().getR() *255);
		temp[i*3+1] = static_cast<unsigned char>(pixels[i].getColorDouble().getG() *255);
		temp[i*3+2] = static_cast<unsigned char>(pixels[i].getColorDouble().getB() *255);
	}
	file.write(reinterpret_cast<char*>(&temp[0]), size*3);

	if(file.fail()){
		std::cout <<"Oh no second fail!" << std::endl;
	}
	file.close();*/

	std::cout << std::endl << std::endl << "Writing image..." << std::endl;
	FILE *fp = fopen(filename.c_str(), "wb"); /* b - binary mode */
	(void) fprintf(fp, "P3\n%d %d\n255\n", width, height);
	for (Pixel p : pixels){
		ColorDbl clr = p.getColorDouble();
		(void) fprintf(fp, "%d %d %d ",
					   (int)(255 * (clr.r)),
					   (int)(255 * (clr.g )),
					   (int)(255 * (clr.b )));
	}

	(void) fclose(fp);
	std::cout << std::endl << "Wrote image to `" + filename + "`." << std::endl;
}
