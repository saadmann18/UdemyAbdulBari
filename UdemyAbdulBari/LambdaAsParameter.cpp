#include <iostream>
#include <string>

using namespace std;
template <typename T>
void fun(T p)
{
	p();
}

int main()
{
	[]() {cout << "Hello" << endl; }();
	int a = 10;
	auto f = [&a]() {cout << a++ << endl; };
	fun(f);
	fun(f);
}