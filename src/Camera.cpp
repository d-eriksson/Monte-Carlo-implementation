#include "Camera.h"

Camera::Camera(int w, int h)
{
	width = w;
	height = h;
	eye1 = glm::vec3(-2.0f, 0.0f, 0.0f);
	eye2 = glm::vec3(-1.0f, 0.0f, 0.0f);
	pixels.reserve(w*h);
}

void Camera::createImage(std::vector<float> pixels)
{
	
}
