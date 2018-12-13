#ifndef MONTECARLO_TRIANGLE_H
#define MONTECARLO_TRIANGLE_H
#include "ray.h"

class Triangle {
public:
	//The corner points of the triangle
	glm::vec3 vertex1, vertex2, vertex3;

	//Edges are used to calculate the normal
	glm::vec3 edge1, edge2;

	//The normal of the triangle
	glm::vec3 normal;

	//Color of the triangle
	ColorDbl color;

	//Constructors; Default constructor is not used
	Triangle() = delete;
	//Temporary non-color version
	//Triangle(glm::vec3 vert1, glm::vec3 vert2, glm::vec3 vert3);
	Triangle(glm::vec3 vert1, glm::vec3 vert2, glm::vec3 vert3, ColorDbl col);

	// This function determines if there is an intersection between the ray and "this" triangle
	bool Triangle::rayIntersection(Ray * rayIn);

	//Variable to store distance of intersection in every triangle (NOT NECESSARY LATER)
	float t;
};
#endif //MONTECARLO_TRIANGLE_H
