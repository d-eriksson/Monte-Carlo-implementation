#ifndef MONTECARLO_DIRECTION_H
#define MONTECARLO_DIRECTION_H
#include <iostream>

class Direction {
public:

	//A double representing size in each dimension
	double x;
	double y;
	double z;

	//Default constructor must be forbidden, it has no logical use
	Direction() = delete;

	//Constructor accepts doubles, implicitly converts ints to doubles
	Direction(double xIn, double yIn, double zIn);

	//Modified output
	friend std::ostream& operator<< (std::ostream &out, const Direction &Direction);
};
#endif //MONTECARLO_DIRECTION_H
