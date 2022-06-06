#include <iostream>
using namespace std;

class Power
{
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0)
	{
		this->kick = kick; this->punch = punch;
	}
	void show();
	Power operator+ (Power op2);
	bool operator== (Power op2);
	friend bool equals(Power k, Power p);
};

void Power::show()
{
	cout << "kick = " << kick << ' ' << "punch = " << punch << endl;
}

bool Power::operator==(Power op2)
{
	if (this->kick == op2.kick && this->punch == op2.punch) return true;
	else return false;
}

Power Power::operator+(Power op2)
{
	Power tmp;
	tmp.kick = this->kick + op2.kick;
	tmp.punch = this->punch + op2.punch;
	return tmp;
}

int main()
{
	Power a(3, 5), b(3, 5), c;
	c = a + b;
	a.show();
	b.show();
	c.show();

	if (a == b) cout << "두 파워가 같다." << endl;
	else cout << "두 파워가 같지 않다." << endl;
}