#include <../glm/glm/glm.hpp>
#include "ColorDbl.h"

class Ray {
public:
	glm::vec3 start;
	glm::vec3 direction;
	glm::vec3 end;
	ColorDbl raycolor;
//	Some sort of reference to an intersected triangle,
//  however, this is problematic since Triangle inherits Ray
	int triangle_index;

	Ray() = delete;
	Ray(glm::vec3 origin, glm::vec3 dir);
};