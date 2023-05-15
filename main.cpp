#include <cstdio>
#include <iostream>
using namespace std;

class Road {
public:
	double length;
	int width;
	Road();
	Road(double newLenght, int newWidth);
	void out() {
		cout << "Length: " << length << endl;
		cout << "Width: " << width << endl;
	}
};

Road::Road() {
	length = 0;
	width = 0;
}

Road::Road(double newLenght, int newWidth) {
	length = newLenght;
	width = newWidth;
}


int main() {
	Road road(333.3, 8);
	cout << "Before access: \n";
	road.out();
	road.length = 555.5;
	road.width = 5;
	road.out();
	return 0;
}