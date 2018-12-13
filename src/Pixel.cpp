#include "Pixel.h"


Pixel::Pixel(ColorDbl c) {
    color = c;
}

void Pixel::setColorDouble(const ColorDbl &c) {
    color = c;
}
void Pixel::setColorDoubleFromRayList(){
    double r = 0.0;
    double g = 0.0;
    double b = 0.0;
    for(Ray R: rayList){
        r += R.raycolor.getR();
        g += R.raycolor.getG();
        b += R.raycolor.getB();
    }
    color = ColorDbl(r/rayList.size(),g/rayList.size(),b/rayList.size());
}
ColorDbl Pixel::getColorDouble(){
    return color;
}

void Pixel::addRay(Ray r) {
    rayList.push_back(r);
}

Ray Pixel::getFirstRay() {
    return rayList[0];
}

std::vector<Ray> Pixel::getRayList() {
    return rayList;
}
