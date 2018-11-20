#include "Ray.h"

Ray::Ray(glm::vec3 origin, glm::vec3 dir)
{
	start = origin;
	direction = dir;
}
