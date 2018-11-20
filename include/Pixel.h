#ifndef MONTECARLO_PIXEL_H
#define MONTECARLO_PIXEL_H
#include "ColorDbl.h"
#include "Ray.h"
#include <vector>

class Pixel {
public:
    Pixel();
    Pixel(ColorDbl c);
    void setColorDouble(const ColorDouble &colorDouble);
    void addRay(Ray &);
    ColorDouble getColorDouble();
    std::vector<Ray> getRayList();
    Ray getFirstRay();

private:
    std::vector<Ray> rayList;
    ColorDbl color;
};


#endif //MONTECARLO_PIXEL_H
