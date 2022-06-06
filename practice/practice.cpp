//#include <iostream>
//using namespace std;
//
//class Rectangle
//{
//public:
//	int width;
//	int height;
//	int getArea();
//};
//
//int Rectangle::getArea()
//{
//	return { width * height };
//}
//
//int main()
//{
//	Rectangle rect;
//	rect.width = 3;
//	rect.height = 5;
//	cout << "사각형의 면적은 : " << rect.getArea() << endl;
//}

//#include <iostream>
//using namespace std;
//
//class Circle
//{
//public:
//	int radius;
//	Circle();
//	Circle(int r);
//	double getArea();
//};
//
//Circle::Circle()
//{
//	radius = 1;
//	cout << "반지름 " << radius << "인 원 생성" << endl;
//}
//
//Circle::Circle(int r)
//{
//	radius = r;
//	cout << "반지름 " << radius << "인 원 생성" << endl;
//}
//
//double Circle::getArea()
//{
//	return 3.14 * radius * radius;
//}
//
//int main()
//{
//	Circle donut;
//	double area = donut.getArea();
//	cout << "도넛의 면적은 " << area << endl;
//
//	Circle pizza(30);
//	area = pizza.getArea();
//	cout << "피자의 면적은 " << area << endl;
//}

//#include <iostream>
//using namespace std;
//
//class Rectangle
//{
//public:
//	int width, height;
//	Rectangle();
//	Rectangle(int w, int h);
//	Rectangle(int length);
//	bool isSquare();
//};
//
//Rectangle::Rectangle()
//{
//	width = height = 1;
//}
//
//Rectangle::Rectangle(int w, int h)
//{
//	width = w; height = h;
//}
//
//bool Rectangle::isSquare()
//{
//	if (width == height) return true;
//	else return false;
//}
//
//int main()
//{
//	Rectangle rect1;
//	Rectangle rect2(3, 5);
//	Rectangle rect3(3);
//
//	if (rect1.isSquare()) cout << "rect1 = 정사각형" << endl;
//	if (rect2.isSquare()) cout << "rect2 = 정사각형" << endl;
//	if (rect3.isSquare()) cout << "rect3 = 정사각형" << endl;
//}

#include <iostream>
using namespace std;

class Circle
{
public:
	int radius;
	Circle();
	Circle(int r);
	~Circle();
	double getArea();
};

Circle::Circle()
{
	radius = 1;
	cout << "반지름" << radius << "인 원 생성" << endl;
}

Circle::Circle(int r)
{
	radius = r;
	cout << "반지름" << radius << "인 원 생성" << endl;
}

Circle::~Circle()
{
	cout << "반지름" << radius << "인 원 삭제" << endl;
}

double Circle::getArea()
{
	return 3.14 * radius * radius;
}

int main()
{
	Circle donut;
	Circle pizza(30);
	return 0;
}