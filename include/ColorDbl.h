#ifndef MONTECARLO_COLORDBL_H
#define MONTECARLO_COLORDBL_H
#include <iostream>

class ColorDbl {
  public:
    ColorDbl();
    ColorDbl(double a, double b, double c);
	ColorDbl(std::string col);
    double getHighestIntesity();
    double getAverageIntesity();
    double getR();
    double getG();
    double getB();

    friend std::ostream& operator<< (std::ostream &out, const ColorDbl &c);
  private:
    double r;
    double g;
    double b;
};

#endif //MONTECARLO_COLORDBL_H
