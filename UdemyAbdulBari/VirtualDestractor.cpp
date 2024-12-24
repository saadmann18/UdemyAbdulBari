#include <iostream>
#include <string>

using namespace std;

class Base {
public:
	Base()
	{
		cout << "Base Constructor is called" << endl;
	}

	virtual ~Base()
	{
		cout << "Base Destructor is called" << endl;
	}
};

class Derived : public Base
{
public:
	Derived()
	{
		cout << "Derived Constructor is called" << endl;
	}
	~Derived()
	{
		cout << "Derived Desstructor is called" << endl;
	}

};

int main()
{
	Base* p = new Derived();
	delete p;

}