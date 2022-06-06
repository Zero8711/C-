#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	string address("¼­¿ï½Ã Áß¶û±¸ ¸Á¿ì·Î 75±æ 19");
	string copyAddress(address);

//	char text[] = { 'L', 'o', 'v', 'e', ' ', 'C', '+', '+', '\0'};
	char text[] = "Love C++";
	string title(text);

	cout << str << endl;
	cout << address << endl;
	cout << copyAddress << endl;
	cout << title << endl;
}