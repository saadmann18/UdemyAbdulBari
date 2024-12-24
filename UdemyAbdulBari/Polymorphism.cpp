#include <iostream>
#include <string>

using namespace std;

class Car
{
public:
	virtual void start() = 0; //Pure virtual function
	virtual void stop() = 0;  //Pure virtual function: must be overrided by derived classes.

};
class Innova : public Car
{
public:
	void start()
	{
		cout << "Innova started." << endl;
	}
	void stop()
	{
		cout << "Innova Stopped." << endl;
	}
};
class Swift: public Car
{
public:
	void start()
	{
		cout << "Swift started." << endl;
	}
	void stop()
	{
		cout << "Swift Stopped." << endl;
	}
};

int main()
{
	//base class pointer, derived class object in heap
	Car* c = new Innova();
	c->start();
	//base class pointer, derived class object in stack
	c = new Swift();
	c->start();


}