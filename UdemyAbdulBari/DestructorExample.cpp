#include <iostream>
#include <string>

using namespace std;

class Demo {
	int* p;
public:
	Demo()
	{
		p = new int[10];
		cout << "Constructor is called"<<endl;
	}

	~Demo()
	{
		delete[]p;
		cout << "Destructor is called"<<endl;
	}
};

void fun()
{
	Demo* p = new Demo();
	delete p;
}

int main()
{
	fun();
}