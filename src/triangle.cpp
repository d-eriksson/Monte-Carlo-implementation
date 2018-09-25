#include "..\include\triangle.h"


Triangle::Triangle(glm::vec3 inV1, glm::vec3 inV2, glm::vec3 inV3, ColorDbl * triangle_color)
{
	//Initialize corner vertices
	vertex1 = inV1;
	vertex2 = inV2;
	vertex3 = inV3;

	//Create edges in order to calculate normal, only need two edges
	edge1 = vertex2 - vertex1;
	edge2 = vertex3 - vertex2;

	//Generate normal of the triangle
	normal = glm::normalize(glm::cross(edge1, edge2));
}

Triangle::rayIntersection(Ray * rayIn)
{

}
