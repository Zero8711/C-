#include <iostream>
using namespace std;

int big(int a, int b)
{
	if (a > b)
		return a;
	else return b;
}
//int big(int *a, int size) 아래를 이렇게 쓰는게 더 보기쉽다.
int big(int a[], int size)
{
	int res = a[0];
	for (int i = 1; i < size; i++)
	{
		if (res < a[i])
			res = a[i];
	}
	return res;
}

int main()
{
	int array[5] = { 1, 9, -2, 8, 6};
	cout << big(5, 4) << endl;
	cout << big(array, 5) << endl;

	return 0;
}