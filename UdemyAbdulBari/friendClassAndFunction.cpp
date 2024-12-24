#include <iostream>
#include <string>

using namespace std;


class Your;
class My
{
	int a;
	friend class Your;
};

class Your
{
	My m;
	void fun()
	{
		m.a;
	}
};

int main()
{ }