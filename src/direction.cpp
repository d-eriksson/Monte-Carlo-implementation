#include "..\include\direction.h"
#include <math.h>

Direction::Direction(double xIn, double yIn, double zIn)
{
	//Find the length of the vector and normalize
	double l = sqrt(pow(xIn, 2) + pow(yIn, 2) + pow(zIn, 2));

	x = xIn/l;
	y = yIn/l;
	z = zIn/l;
}

std::ostream & operator<< (std::ostream &out, const Direction &Direction)
{
	out << "Direction(" << Direction.x << ", " << Direction.y << ", " << Direction.z << ")";

	return out;
}