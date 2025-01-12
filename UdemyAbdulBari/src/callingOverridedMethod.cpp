#include <iostream>
#include <string>

using namespace std;

class Base
{
public:
	virtual void display() //virtual lets run the child class func. Without virtual, base class function will run.
	{
		cout << "display Base class" << endl;
	}
};
class Child : public Base
{
public:
	void display()
	{
		cout << "display child class" << endl;
	}
};

int main()
{
	//base class pointer, derived class object in heap
	Base *b = new Child();
	b->display();
	//base class pointer, derived class object in stack
	Child c;
	Base* ptr = &c;
	ptr->display();


}