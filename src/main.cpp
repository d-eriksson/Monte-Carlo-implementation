#include <iostream>
#include "direction.h"
#include "Vertex.h"


using namespace std;

int main(void) {

	Direction *D1 = new Direction(1, 1, 0);
	Direction *D2 = new Direction(-2.95, 0, 3.1);
	Direction *D3 = new Direction(0, -1.53, 2.55);
	Direction *D4 = new Direction(1, 1, 1);

	cout << *D1 << endl;
	cout << *D2 << endl;
	cout << *D3 << endl;
	cout << *D4 << endl;

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
