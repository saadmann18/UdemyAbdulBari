#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v = { 10, 20, 30, 50, 90 };
	vector<int>::iterator itr;
	cout << "Elements of vector are: " << endl;
	for (itr = v.begin(); itr != v.end(); itr++)
	{
		cout << *itr << " " << endl;
	}
}