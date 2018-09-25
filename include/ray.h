#include "Vertex.h"
#include "direction.h"
#include "triangle.h"
#include "ColorDbl"

class Ray {
public:
	Vertex * start;
	Vertex * end;
	Direction * direction;
	Triangle * triangle;
	ColorDbl raycolor;


	Ray();

};