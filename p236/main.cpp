#include <iostream>
using namespace std;

//void swap(int &a, int &b)
void swap(int a, int b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;

	cout << "swap() : " << a << ' ' << b << endl;
}

int main()
{
	int m = 2, n = 9;
	swap(m, n);
	cout << "main() : " << m << ' ' << n << endl;
}