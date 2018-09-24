#include <iostream>

class Direction {
public:
	//A double representing size in each dimension
	double x;
	double y;
	double z;

	//Default constructor must be forbidden, it makes
	//no sense to initialize a direction without having a direction
	Direction();
	Direction(double xIn, double yIn, double zIn);
	Direction(int xIn, int yIn, int zIn);

	friend std::ostream& operator<< (std::ostream &out, const Direction &Direction)
};