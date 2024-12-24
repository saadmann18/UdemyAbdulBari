#include <iostream>
#include <string>

using namespace std;

class Base
{
public:
	void display()
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
	Base b;
	b.display();
	Child c;
	c.display();
}