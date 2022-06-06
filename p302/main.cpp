#include <iostream>
using namespace std;

class Person
{
public:
	int money;
	void addMoney(int money)
	{
		this->money += money;
	}

	static int sharedMoney;
	static void addshared(int n)
	{
		sharedMoney += n;
	}
};

int Person::sharedMoney = 10;

int main()
{
	Person::addshared(50);
	cout << Person::sharedMoney << endl;

	Person han;
	han.money = 100;
	han.sharedMoney = 200;
	Person::sharedMoney = 300;
	Person::addshared(100);

	cout << han.money << ' ' << Person::sharedMoney << endl;
}