#include "Vertex.h"
#include <iostream>

Vertex::Vertex(){
  x = 0.0;
  y = 0.0;
  z = 0.0;
}
Vertex::Vertex(double a, double b, double c){
  x = a;
  y = b;
  z = c;
}
Vertex::Vertex(int a, int b, int c){
  x = (double)a;
  y = (double)b;
  z = (double)c;
}
std::ostream& operator<< (std::ostream &out, const Vertex &vertex)
{
    // Since operator<< is a friend of the Point class, we can access Point's members directly.
    out << "Vertex(" << vertex.x << ", " << vertex.y << ", " << vertex.z << ")";

    return out;
}
