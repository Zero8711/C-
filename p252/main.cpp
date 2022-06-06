#include <iostream>
#include <cstring>
using namespace std;

class Person
{
	char* name;
	int id;
public:
	Person(int id, const char* name);//생성자
	Person(const Person& person);//복사생성자
	~Person();//소멸자
	void changeName(const char* name);
	void show() { cout << id << ',' << name << endl; }
};

Person::Person(int id, const char* name)
{
	this->id = id;
	int len = strlen(name);
	this->name = new char[len + 1];
	strcpy(this->name, name);
}

Person::Person(const Person& person)
{
	int len = strlen(person.name);
	this->name = new char[len + 1];
	strcpy(this->name, person.name);
//	this->name = person.name;
	this->id = person.id;
}

Person::~Person()
{
	if (name)
		delete[] name;
}

void Person::changeName(const char* name)
{
	if (strlen(name) > strlen(this->name))
		return;
	strcpy(this->name, name);
}

int main()
{
	Person father(1, "Kitae");
	Person daughter(father);

	cout << "daughter 객체 생성 직후 ----" << endl;

	father.show();
	daughter.show();

	daughter.changeName("Grace");
	cout << "daughter 이름을 Grace로 변경 후 ----" << endl;
	father.show();
	daughter.show();

	return 0;
}
//얕은 복사의 문제점 : 사본을 바꿔도 원본의 데이터도 바뀐다