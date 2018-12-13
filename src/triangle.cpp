#include "triangle.h"

Triangle::Triangle(glm::vec3 inV1, glm::vec3 inV2, glm::vec3 inV3, ColorDbl col)
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

	//Set color of triangle
	color = col;

	//Default intersection distance (represents "no intersection)
	t = 999999;
}

// This function determines if there is an intersection between the ray and "this" triangle
// and additionally calculates the distance t.
bool Triangle::rayIntersection(Ray * rayIn)
{
	// NOTE: This method should be called recursively for every
	//triangle in the scene. From Scene::triangleIntersect()

	// Calculate t; The distance to the intersection in the Ray direction
	t = (glm::dot(glm::cross((rayIn->start - vertex1),edge1), edge2)) / (glm::dot(glm::cross(rayIn->direction, edge2), edge1));


	// Set end point of ray
	rayIn->end = rayIn->start + t*rayIn->direction;
	return (t > 0 && t < 99999);
}
