#include<iostream>
#include<string>
using namespace std;

class Circle
{
	int radius; // 디폴트값은 private

	/*
	private:
		int radius; 는 위 코드와 같은 의미
	*/

public:
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

int main()
{
	Circle waffle(5); // 생성자에서 radius 접근가능
	waffle.radius = 5; // private 멤버 접근 불가
}