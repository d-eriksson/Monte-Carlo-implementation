#include <../glm/glm/glm.hpp>
#include <vector>
#include "Pixel.h"
#include "Scene.h"
#include <string>
#include <iostream>
#include <fstream>

class Camera {
public:
	Camera(int w, int h);
	void createPixels(Scene &S);
	void saveImage(std::string filname);

private:
	glm::vec3 eye1;
	glm::vec3 eye2;
	int width;
	int height;
	std::vector<Pixel> pixels;
};
