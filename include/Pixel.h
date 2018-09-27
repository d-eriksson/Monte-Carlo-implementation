#ifndef MONTECARLO_PIXEL_H
#define MONTECARLO_PIXEL_H
#include "ColorDbl.h"
#include "Ray.h"
#include <vector>

class Pixel {
public:
    Pixel(ColorDbl c = ColorDbl(0.0f));
    void setColorDouble(const ColorDouble &colorDouble);
    void addRay(Ray &);
    const ColorDouble &getColorDouble() const;
    const std::vector<Ray> &getRayList() const;
    Ray getFirstRay();

private:
    std::vector<Ray> rayList;
    ColorDbl color;
};


#endif //MONTECARLO_PIXEL_H
