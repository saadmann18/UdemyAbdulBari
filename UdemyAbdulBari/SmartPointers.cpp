#include <iostream>
#include <string>

using namespace std;

class Rectangle
{
	int length;
	int breadth;
public:
	Rectangle(int l, int b) 
	{
		length = l;
		breadth = b;
	}
	int area()
	{
		return length * breadth;
	}
};

int main()
{
	Rectangle r1(20, 20);
	cout << r1.area() << endl;

	shared_ptr<Rectangle> ptr(new Rectangle(20, 20));
	cout << ptr->area() << endl;
	shared_ptr<Rectangle> ptr2;
	ptr2 = ptr;
	cout << ptr2->area()<<endl;
	cout << ptr->area() << endl;
	cout << "ptr_count: " << ptr2.use_count();
}