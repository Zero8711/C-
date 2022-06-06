#include <iostream>
using namespace std;
#pragma warning(disable:4996)

class Circle
{
private:
	int radius;
	char name[12];
public:
	Circle(const Circle& c);
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
	void setName(const char* np)
	{
		strcpy(name, np);
	}

	char* getName()
	{
		return name;
	}
};

Circle::Circle(const Circle& c)
{
	this->radius = c.radius;
	strcpy(this->name, c.name);
	cout << "���� ������ ���� radius = " << radius << endl;
}

int main()
{
	Circle src(30);
	src.setName("������");
	cout << "name : " << src.getName() << endl;
	Circle dest(src);

	cout << "������ ���� : " << src.getArea() << endl;
	cout << "�纻�� ���� : " << dest.getArea() << endl;
	cout << "name : " << dest.getName() << endl;
}