#include <iostream>
#include <string>

using namespace std;

int main()
{
	[]() {cout << "Hello" << endl; }();
	int a=10, b=15;
	[&a, &b]() {cout << ++a << " " << ++b << endl; }();
	int c = [](int x, int y)->int{return x + y; }(5, 17);
	cout << c<<endl;
}