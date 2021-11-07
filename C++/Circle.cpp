#include<iostream>
#include<string>
using namespace std;

class Circle
{
public:
	int radius;
	double getArea();

	Circle();
	Circle(int r);
};

Circle::Circle()
{
	radius = 1;
	cout << "扁夯盔积己" << endl;
}

Circle::Circle(int r)
{
	radius = r;
	cout << r << "盔积己" << endl;
}

double Circle::getArea()
{
	return 3.14 * radius * radius;
}

int main()
{
	Circle donut;
	double area = donut.getArea();
	cout << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << area;
}