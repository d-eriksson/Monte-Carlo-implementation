#include "direction.h"
#include "..\include\direction.h"

Direction::Direction()
{
	
};

Direction::Direction(double xIn, double yIn, double zIn)
{
	x = xIn;
	y = yIn;
	z = zIn;
}

Direction::Direction(int xIn, int yIn, int zIn)
{
	x = double(xIn);
	y = double(yIn);
	z = double(zIn);
}

std::ostream & operator<< (std::ostream &out, const Direction &Direction)
{

}