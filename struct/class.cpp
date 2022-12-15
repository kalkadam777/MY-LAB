#include <iostream>
#include <cmath>
using namespace std;


class RightTriangle
{
public:
	double side1, side2;
	RightTriangle();
	~RightTriangle();

	void setSide1(double s1) {
		side1 = s1;
	}
	double getSide1() {
		return side1;
	}

	void setSide2(double s2) {
		side2 = s2;
	}
	double getSide2() {
		return side2;
	}

	double getHypoth() {
		return sqrt(side1* side1 + side2 * side2);
	}
};

RightTriangle::RightTriangle()
{
}

RightTriangle::~RightTriangle()
{
}

int main() {
	RightTriangle t1;
	t1.setSide1(50);
	t1.setSide2(21);
	cout << t1.getHypoth() << ' ' << t1.getSide1() << ' ' << t1.getSide2();
}