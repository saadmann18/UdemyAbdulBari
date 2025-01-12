#include <iostream>
#include <string>

using namespace std;


//function return type: address
int* fun() {
	int* p = new int[5];
	for (int i = 0; i < 5; i++) {
		p[i] = 5 * i;
	}
	cout << p << endl;
	return p;
}

int& fun(int& x) {
	return x;
}

int main() {
	/*string::iterator it;
	string str = "TODAY";
	int count = 0;
	for (it = str.begin(); it != str.end(); it++) {
		cout << *it << endl;
		count++;
	}
	cout << "The length using it is: " << count << endl;

	cout << str.length() << endl;*/

	/*int* q = fun();
	cout << q << endl;

	for (int i = 0; i < 5; i++) {
		cout << q[i] << endl;
	}*/

	int a = 10;
	fun(a) = 25;
	cout << a << endl;
	return 0;
	
}