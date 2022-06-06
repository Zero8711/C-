#include <iostream>
#include <string>
using namespace std;

class Point
{
	int x, y;
public:
	Point(int x, int y) { this->x = x; this->y = y; }
	Point()
	{
		x = 0;
		y = 0;
	}
	void set(int x, int y) { this->x = x; this->y = y; }
	void showPoint()
		{
			cout << "(" << x << ' ' << y << ')' << endl;
		}
};

class ColorPoint : public Point
{
	string color;
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint();
};

void ColorPoint::showColorPoint()
{
	cout << color << ":";
	showPoint();
}

class GrayPoint : public Point
{
	string color;
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint();
};

void GrayPoint::showColorPoint()
{
	cout << color << ":";
	showPoint();
}

//void testShow(ColorPoint& p)
//{
//	p.showColorPoint();
//}
//
//void testShow(GrayPoint& p)
//{
//	p.showColorPoint();
//}

void testShow(Point* p)
{
//	p.showColorPoint();
	ColorPoint* cp = (ColorPoint*)p;
	cp->showColorPoint();
	GrayPoint* cp = (ColorPoint*)p;
	cp->showColorPoint();
}

int main()
{
	ColorPoint cp;
	GrayPoint gp;
	cp.set(3, 4);
	cp.setColor("Red");
	gp.set(1, 2);
	gp.setColor("Black");
//	testShow(cp);
//	testShow(gp);
	testShow(&cp);
	testShow(&gp);
#if 0
	Point* p = new Point;
	ColorPoint* cp = new ColorPoint;
	cp = (ColorPoint*)p;


	ColorPoint cp;
	ColorPoint* pDer = &cp;
	Point* pBase = pDer;

	pDer->set(2, 4);
	pBase->showPoint();
	pDer->setColor("Blue");
	pDer->showColorPoint();
	pDer = (ColorPoint*)pBase;



//	Point p;
//	p.showPoint();
	ColorPoint cp;
	cp.showPoint();
	cp.set(3, 4);
	cp.setColor("RED");
	cp.showColorPoint();
	#endif
}