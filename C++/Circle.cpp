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
	~Circle();
};

Circle::Circle()
{
	radius = 1;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::Circle(int r)
{
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

double Circle::getArea()
{
	return 3.14 * radius * radius;
}

Circle::~Circle()
{
	cout << "반지름 " << radius << " 원 소멸" << endl;
}

Circle globalDonut(1000);
Circle globalPizza(2000);

void f()
{
	Circle fDonut(100);
	Circle fPizza(200);
}

int main()
{
	Circle mainDonut;
	Circle mainPizza(30);
	f();
}