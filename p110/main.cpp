#include <iostream>
using namespace std;

class Circle
{
public:
	int radius;
	Circle();
	Circle(int r);
	double getArea();
};

Circle::Circle() : Circle(1) {}
//{
//	radius = 1;
//	cout << "������" << radius << "�� �� ����" << endl;
//}

Circle::Circle(int r)
{
	radius = r;
	cout << "������" << radius << "�� �� ����" << endl;
}

double Circle::getArea()
{
	return 3.14 * radius * radius;
}

int main()
{
	Circle donut;
	double area = donut.getArea();//area�� ó�� ���� ������ ����� �Բ� �ʱ�ȭ
	cout << "donut�� ������ " << area << endl;

	Circle pizza(30);
	area = pizza.getArea();//������ ��ȯ���� ���� �����߱� ������ �տ� ��ȯ���� ���� �ʾƵ� ��
	cout << "pizza�� ������ " << area << endl;
}