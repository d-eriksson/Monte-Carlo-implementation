#include "Pixel.h"

Pixel::Pixel(ColorDbl c) {
    color = c;
}

void Pixel::setColorDouble(const ColorDbl &c) {
    Pixel::color = c;
}

const ColorDouble &Pixel::getColorDouble() const {
    return color;
}

void Pixel::addRay(Ray &r) {
    rayList.push_back(r);
}

Ray Pixel::getFirstRay() {
    return rayList[0];
}

const std::vector<Ray> &Pixel::getRayList() const {
    return rayList;
}
