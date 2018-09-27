#include "..\include\triangle.h"


Triangle::Triangle(glm::vec3 inV1, glm::vec3 inV2, glm::vec3 inV3, glm::vec3 triangle_color)
{
	//Initialize corner vertices
	vertex1 = inV1;
	vertex2 = inV2;
	vertex3 = inV3;

	//Create edges in order to calculate normal, only need two edges
	edge1 = vertex2 - vertex1;
	edge2 = vertex3 - vertex1;

	//Generate normal of the triangle
	normal = glm::normalize(glm::cross(edge1, edge2));
}

bool Triangle::rayIntersection(Ray * rayIn)
{
	double t = (glm::dot(glm::cross((rayIn->start - vertex1),edge1), edge2)) / (glm::dot(glm::cross(rayIn->direction, edge2), edge1));

	//std::cout << "value of t: " << t << std::endl;

	return (t > 0 && t < 99999);
}
