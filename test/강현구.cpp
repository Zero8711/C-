#include <iostream>
#include <string>
using namespace std;

class Animal
{
	string name;
	int age;
public:
	Animal() {}; //기본생성자 {}가 왜 필요하죠?
	Animal(string name, int age)
	{
		this->name = name;
		this->age = age;
		cout << "Animal 생성" << endl;
	}
	~Animal()
	{
		cout << "Animal 소멸" << endl;
	}
	void setName(string name)
	{
		this->name = name;
	}
	void setAge(int age)
	{
		this->age = age;
	}
	string getName()
	{
		return name;
	}
	int getAge()
	{
		return age;
	}
	friend void running(Animal* pAnimal);
	virtual void crying() = 0;
};

void running(Animal* pAnimal)
{
	cout << pAnimal->name << "가 달린다" << endl;
}

void crying(Animal* pAnimal)
{
	pAnimal->crying();
}

class Dog : public Animal
{
	string bark;
public:
	Dog(string name, int age, string bark) : Animal(name, age)
	{
		this->bark = bark;
		cout << "Dog 생성" << endl;
	}
	Dog(Dog& c)
	{
		this->setName(c.getName());
		this->setAge(c.getAge());
		this->bark = c.bark;
	}
	~Dog()
	{
		cout << "Dog 소멸" << endl;
	}
	void crying()
	{
		cout << getName() << "는 " << bark << endl;
	}
	string getBark()
	{
		return bark;
	}
};

class Cat : public Animal
{
	string bark;
public:
	Cat(string name, int age, string bark) : Animal(name, age)
	{
		this->bark = bark;
		cout << "Cat 생성" << endl;
	}

	Cat(Cat& c)
	{
		this->setName(c.getName());
		this->setAge(c.getAge());
		this->bark = c.bark;
	}
	~Cat()
	{
		cout << "Cat 소멸" << endl;
	}
	void crying()
	{
		cout << getName() << "는 " << bark << endl;
	}
	string getBark()
	{
		return bark;
	}
};

int main()
{
	cout << "--추상클래스와 파생클래스 구현--\n";
	Dog* dog = new Dog("강아지", 4, "멍멍");
	Cat* cat = new Cat("고양이", 2, "야옹");
	cout << "\n--매개변수의 다형성 구현--\n";
	crying(dog);
	crying(cat);
	running(dog);
	running(cat);
	cout << "\n--기본 복사생정자 직접 구현--\n";
	Dog copyDog(*dog);
	cout << copyDog.getName() << endl;
	cout << copyDog.getAge() << endl;
	cout << copyDog.getBark() << endl;
	cout << "\n--소멸자 실행--\n";
	delete dog;
	delete cat;
	return 0;
}