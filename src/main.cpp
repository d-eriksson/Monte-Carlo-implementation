#include <iostream>
#include "direction.h"
#include "Vertex.h"
#include "triangle.h"
#include "ColorDbl.h"


using namespace std;

int main(void) {

	Direction *D1 = new Direction(1, 1, 0);
	Direction *D2 = new Direction(-2.95, 0, 3.1);
	Direction *D3 = new Direction(0, -1.53, 2.55);
	Direction *D4 = new Direction(1, 1, 1);

	cout << *D1 << endl;
	cout << *D2 << endl;
	cout << *D3 << endl;
	cout << *D4 << endl;

	Vertex *V1 = new Vertex();
	Vertex *V2 = new Vertex(0.2,0.3,0.4);
	Vertex *V3 = new Vertex(1,3,4);
	Vertex *V4 = new Vertex(-1,3,4);
	Vertex *V5 = new Vertex(-0.2,0.3,-0.4);

	cout << *V1 << endl;
	cout << *V2 << endl;
	cout << *V3 << endl;
	cout << *V4 << endl;
	cout << *V5 << endl;


	Triangle *T1 = new Triangle(glm::vec3(0, 0, 1), glm::vec3(0, 2, 1), glm::vec3(2, 0, 1), glm::vec3(0.85, 0.26, 0));
	Ray *R1 = new Ray(glm::vec3(0, 0, 0), glm::vec3(5, 5, 5));
	Ray *R2 = new Ray(glm::vec3(0, 0, 0), glm::vec3(5, 0, 0));


	std::cout << "Intersecting with R1, should be an intersection in the middle of the triangle: " << std::endl;
	if (T1->rayIntersection(R1))
		std::cout << "Intersection returned true with R1" << std::endl;
	else
		std::cout << "Intersection returned false with R1" << std::endl;

	std::cout << "Intersecting with R2, should not intersect: " << std::endl;
	if (T1->rayIntersection(R2))
		std::cout << "Intersection returned true with R2" << std::endl;
	else
		std::cout << "Intersection returned false with R2" << std::endl;

	ColorDbl *CD1 = new ColorDbl();
	ColorDbl *CD2 = new ColorDbl(0.2,0.3,0.4);
	ColorDbl *CD3 = new ColorDbl(1.2,0.3,0.2);

	cout << *CD1 << endl;
	cout << *CD2 << endl;
	cout << *CD3 << endl;
	cout << CD2->getAverageIntesity() << endl;
	cout << CD2->getHighestIntesity() << endl;
	cout << CD2->getB() << endl;


  return(0);

}
