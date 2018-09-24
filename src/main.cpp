#include <iostream>
#include "Vertex.h"

using namespace std;

int main(void) {

  Vertex *V1 = new Vertex();
  Vertex *V2 = new Vertex(0.2,0.3,0.4);
  Vertex *V3 = new Vertex(1,3,4);
  Vertex *V4 = new Vertex(-1,3,4);
  Vertex *V5 = new Vertex(-0.2,0.3,-0.4);

  cout << *V1 << endl;
  cout << *V2 << endl;
  cout << *V3 << endl;
  cout << *V4 << endl;
  cout << *V5 << endl;



     return(0);

}
