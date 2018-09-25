#include <../glm/glm/glm.hpp>
#include "ColorDbl"

class Ray {
public:
	glm::vec3 start;
	glm::vec3 end;
	glm::vec3 direction;
	ColorDbl raycolor;

	Ray();
	Ray(glm::vec3 origin, glm::vec3 dir);
};