#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	string address("����� �߶��� ����� 75�� 19");
	string copyAddress(address);

//	char text[] = { 'L', 'o', 'v', 'e', ' ', 'C', '+', '+', '\0'};
	char text[] = "Love C++";
	string title(text);

	cout << str << endl;
	cout << address << endl;
	cout << copyAddress << endl;
	cout << title << endl;
}