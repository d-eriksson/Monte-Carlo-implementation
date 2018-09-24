#ifndef MONTECARLO_VERTEX_H
#define MONTECARLO_VERTEX_H
#include <iostream>

class Vertex {
public:
    double x;
    double y;
    double z;

    Vertex();
    Vertex(double a, double b, double c);
    Vertex(int a, int b, int c);

    friend std::ostream& operator<< (std::ostream &out, const Vertex &vertex);
};

#endif //MONTECARLO_VERTEX_H
