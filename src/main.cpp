#include <iostream>
#include "..\include\direction.h"

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

     return(0);

}
