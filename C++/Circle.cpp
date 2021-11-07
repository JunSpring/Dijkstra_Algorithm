#include<iostream>
#include<string>
using namespace std;

class Circle
{
	int radius; // ����Ʈ���� private

	/*
	private:
		int radius; �� �� �ڵ�� ���� �ǹ�
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
	cout << "������ " << radius << " �� ����" << endl;
}

Circle::Circle(int r)
{
	radius = r;
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
	Circle waffle(5); // �����ڿ��� radius ���ٰ���
	waffle.radius = 5; // private ��� ���� �Ұ�
}