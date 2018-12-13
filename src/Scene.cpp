#include "Scene.h"

Scene::Scene()
{
	// Add the vertices to the scene
	glm::vec3 floor1(-3,0,-5);
	glm::vec3 floor2(0,6,-5);
	glm::vec3 floor3(10,6,-5);
	glm::vec3 floor4(13,0,-5);
	glm::vec3 floor5(10,-6,-5);
	glm::vec3 floor6(0,-6,-5);
	glm::vec3 roof1(-3,0,5);
	glm::vec3 roof2(0,6,5);
	glm::vec3 roof3(10,6,5);
	glm::vec3 roof4(13,0,5);
	glm::vec3 roof5(10,-6,5);
	glm::vec3 roof6(0,-6,5);

	//Create triangles from the vertex list
	//Floor
	triangles.push_back(Triangle(floor1,floor6,floor2, ColorDbl("white")));
	triangles.push_back(Triangle(floor2,floor6,floor3, ColorDbl("white")));
	triangles.push_back(Triangle(floor3,floor6,floor5, ColorDbl("white")));
	triangles.push_back(Triangle(floor3,floor5,floor4, ColorDbl("white")));

	//Roof
	triangles.push_back(Triangle(roof2,roof6,roof1, ColorDbl("white")));
	triangles.push_back(Triangle(roof3,roof6,roof2, ColorDbl("white")));
	triangles.push_back(Triangle(roof5,roof6,roof3, ColorDbl("white")));
	triangles.push_back(Triangle(roof4,roof5,roof3, ColorDbl("white")));

	//Walls (starting at floor point 1, picking the upper
	//triangle first, moving counter clockwise seen from above.
	triangles.push_back(Triangle(floor1, roof1, roof6, ColorDbl("red")));
	triangles.push_back(Triangle(floor1, roof6, floor6, ColorDbl("red")));
	triangles.push_back(Triangle(floor6, roof6, roof5, ColorDbl("green")));
	triangles.push_back(Triangle(floor6, roof5, floor5, ColorDbl("green")));
	triangles.push_back(Triangle(floor5, roof5, roof4, ColorDbl("blue")));
	triangles.push_back(Triangle(floor5, roof4, floor4, ColorDbl("blue")));
	triangles.push_back(Triangle(floor4, roof4, roof3, ColorDbl("yellow")));
	triangles.push_back(Triangle(floor4, roof3, floor3, ColorDbl("yellow")));
	triangles.push_back(Triangle(floor3, roof3, roof2, ColorDbl("cyan")));
	triangles.push_back(Triangle(floor3, roof2, floor2, ColorDbl("cyan")));
	triangles.push_back(Triangle(floor2, roof2, roof1, ColorDbl("magenta")));
	triangles.push_back(Triangle(floor2, roof1, floor1, ColorDbl("magenta")));
}

void Scene::addTriangle(Triangle * T){

}

void Scene::triangleIntersect(Ray * rayIn)
{
	// Loop over all triangles in list, add to new list if intersecting with ray:
	std::list<Triangle>::iterator it = triangles.begin();
	for(size_t i = 0; i<triangles.size(); ++i){
		if((*it).rayIntersection(rayIn)){
			triangles_intersected.push_back(*(it));
		}
		++it;
		
	}
}