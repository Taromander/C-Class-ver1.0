#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {
	//Rectangel rect1(5,3);
	Rectangle rect1{ 5,3 };
	Rectangle rect2;

	cout << "area of rect1:" << rect1.area() << endl;
	cout << "area of rect2:" << rect2.area() << endl;

	return 0;
}
