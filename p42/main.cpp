#include <iostream>
using namespace std;

int main(int *argc, int *argv[])
{
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 2; j <= 9; j++)
		{
			cout << j << " * " << i << " = " << i*j << "\t";
		}
		cout << endl;
	}
	cout << endl;
	for (i = 2; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			cout << i << " * " << j << " = " << i*j << endl;
		}
		cout << endl;
	}

	cout << 25.0 / 30.0 * 100.0 << "%" << endl;
	int a = 8;
	double b = 12.34;
	a = a << 1;
	cout << "Hello World!" << endl;
	cout << 5 << endl;
	cout << 3.14 << endl;
	cout << a << endl;
	cout << b << endl;
	return 0;
}