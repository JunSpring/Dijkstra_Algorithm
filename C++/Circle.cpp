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
	Circle(int r) // �ζ����Լ��� �� 1
	{
		radius = r;
		cout << "������ " << radius << " �� ����" << endl;
	}
	~Circle();
};

inline Circle::Circle() // �ζ����Լ��� �� 2
{
	radius = 1;
	cout << "������ " << radius << " �� ����" << endl;
}

double Circle::getArea()
{
	return 3.14 * radius * radius;
}

Circle::~Circle()
{
	cout << "������ " << radius << " �� �Ҹ�" << endl;
}

int main()
{

}