#include <../glm/glm/glm.hpp>
#include <vector>

class Camera {
public:
	Camera(int w, int h);
	
private:
	glm::vec3 eye1;
	glm::vec3 eye2;
	int width;
	int height;
	std::vector<float> pixels;
	void createImage(std::vector<float> pixels);
	
};