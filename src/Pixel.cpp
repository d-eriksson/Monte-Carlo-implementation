#include "Pixel.h"


Pixel::Pixel(ColorDbl c) {
    color = c;
}

void Pixel::setColorDouble(const ColorDbl &c) {
    color = c;
}

ColorDbl Pixel::getColorDouble(){
    return color;
}

void Pixel::addRay(Ray &r) {
    rayList.push_back(r);
}

Ray Pixel::getFirstRay() {
    return rayList[0];
}

std::vector<Ray> Pixel::getRayList() {
    return rayList;
}
