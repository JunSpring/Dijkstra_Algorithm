#include<iostream>
#include<string>
using namespace std;

class Circle
{
private:
	int radius;

public:
	double getArea();

	Circle();
	Circle(int r) // 인라인함수의 예 1
	{
		radius = r;
		cout << "반지름 " << radius << " 원 생성" << endl;
	}
	~Circle();
};

inline Circle::Circle() // 인라인함수의 예 2
{
	radius = 1;
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

int main()
{

}