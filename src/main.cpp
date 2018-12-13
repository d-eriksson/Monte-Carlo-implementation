#include <iostream>
#include "Direction.h"
#include "Vertex.h"
#include "triangle.h"
#include "ColorDbl.h"
#include "Scene.h"
#include "Pixel.h"

using namespace std;

int main(void) {

	Ray ray(glm::vec3(0,0,0), glm::vec3(-1,-2,0));
	Scene S;

	//Call triangleIntersect to create the triangles_intersected list
	S.triangleIntersect(&ray);

	//Pick the first (and probably only) intersected triangle
	//Triangle triangle_hit = S.triangles_intersected.front();

	std::cout << "The coordinates of the first vertex of the first triangle hit are: " << std::endl;
	std::cout << "( "
	<< S.triangles_intersected.front().vertex1.x << ", "
	<< S.triangles_intersected.front().vertex1.y << ", "
	<< S.triangles_intersected.front().vertex1.z << " )" << std::endl;

	std::cout << "The intersection distance was: " << S.triangles_intersected.front().t << std::endl;

	/*
	std::cout << "( " << triangle_hit.vertex1.x << ", " << triangle_hit.vertex1.y << ", " << triangle_hit.vertex1.z << " )" << endl;
	std::cout << "( " << triangle_hit.vertex2.x << ", " << triangle_hit.vertex2.y << ", " << triangle_hit.vertex2.z << " )" << endl;
	std::cout << "( " << triangle_hit.vertex3.x << ", " << triangle_hit.vertex3.y << ", " << triangle_hit.vertex3.z << " )" << endl;
	*/

	ColorDbl* C = new ColorDbl(0.2,0.3,0.4);
	Pixel* pix1 = new Pixel(*C);
	cout << pix1->getColorDouble() << endl;
  return(0);
}
