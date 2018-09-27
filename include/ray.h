#include <../glm/glm/glm.hpp>
#include "ColorDbl.h"

class Ray {
public:
	glm::vec3 start;
	glm::vec3 direction;
	glm::vec3 end;
	ColorDbl raycolor;
	Triangle * hit_triangle;

	Ray();
	Ray(glm::vec3 origin, glm::vec3 dir);
};