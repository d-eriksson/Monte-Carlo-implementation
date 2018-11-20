#ifndef MONTECARLO_PIXEL_H
#define MONTECARLO_PIXEL_H
#include "ColorDbl.h"
#include "Ray.h"
#include <vector>

class Pixel {
public:
    Pixel(ColorDbl colorDouble = ColorDbl(0.0,0.0,0.0));
    void setColorDouble(const ColorDbl &colorDouble);
    void addRay(Ray &);
    ColorDbl getColorDouble();
    std::vector<Ray> getRayList();
    Ray getFirstRay();

private:
    std::vector<Ray> rayList;
    ColorDbl color;
};

#endif //MONTECARLO_PIXEL_H
