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
//	cout << "반지름" << radius << "인 원 생성" << endl;
//}

Circle::Circle(int r)
{
	radius = r;
	cout << "반지름" << radius << "인 원 생성" << endl;
}

double Circle::getArea()
{
	return 3.14 * radius * radius;
}

int main()
{
	Circle donut;
	double area = donut.getArea();//area를 처음 쓰기 때문에 선언과 함께 초기화
	cout << "donut의 면적은 " << area << endl;

	Circle pizza(30);
	area = pizza.getArea();//위에서 반환형과 같이 선언했기 때문에 앞에 반환형이 붙지 않아도 됨
	cout << "pizza의 면적은 " << area << endl;
}