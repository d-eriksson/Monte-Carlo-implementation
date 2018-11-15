#include <iostream>
#include "direction.h"
#include "Vertex.h"
//#include "triangle.h"
#include "ColorDbl.h"
#include "Scene.h"

using namespace std;

int main(void) {
	
	Ray ray(glm::vec3(0,0,0), glm::vec3(1,3,0));
	Scene S;

	Triangle triangle_hit = S.triangles_intersected.front();
	std::cout << "The coordinates of the first triangle hit are: " << std::endl;
	std::cout << "( " << triangle_hit.vertex1.x << ", " << triangle_hit.vertex1.y << ", " << triangle_hit.vertex1.z << " )" << endl;
	std::cout << "( " << triangle_hit.vertex2.x << ", " << triangle_hit.vertex2.y << ", " << triangle_hit.vertex2.z << " )" << endl;
	std::cout << "( " << triangle_hit.vertex3.x << ", " << triangle_hit.vertex3.y << ", " << triangle_hit.vertex3.z << " )" << endl;
	
  return(0);

}
