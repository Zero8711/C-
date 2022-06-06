#include <iostream>
#include <string>
using namespace std;

int main()
{
	string names[4];
	for (int i = 0; i < 4; i++)
	{
		cout << "이름 >> ";
		getline(cin, names[i], '\n');
	}

	string latter = names[0];
	for (int i = 0; i < 4; i++)
	{
		if (latter < names[i])
		{
			latter = names[i];
		}
	}
	cout << "사전에서 가장뒤에 나오는 문자열은? " << latter << endl;
}