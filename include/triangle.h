#include "Ray.h"
#include <iostream>

class Triangle {
public:
	//The corner points of the triangle
	glm::vec3 vertex1, vertex2, vertex3;
	//Edges of the triangle, useful for calculating the normal
	glm::vec3 edge1, edge2, edge3;

	//Color of the triangle
	glm::vec3 color;

	//The normal of the triangle
	glm::vec3 normal;

	//No default constructor of triangle needed
	Triangle() = delete;
	Triangle(glm::vec3 vert1, glm::vec3 vert2, glm::vec3 vert3, glm::vec3 triangle_color);

	bool Triangle::rayIntersection(Ray * rayIn);
};
