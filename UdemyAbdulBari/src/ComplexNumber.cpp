#include <iostream>
#include <string>

using namespace std;

class Complex
{
private:
	int real;
	int imaginary;

public:
	friend ostream& operator<<(ostream& o, Complex& c);

	Complex(int r = 0, int i = 0) {
		real = r;
		imaginary = i;
	}
	friend Complex operator+(Complex c1, Complex c2);
};
Complex operator+(Complex c1, Complex c2) {
	Complex temp;
	temp.real = c1.real + c2.real;
	temp.imaginary = c1.imaginary + c2.imaginary;
	return temp;
}
ostream& operator<<(ostream& o, Complex& c)
{
	o << c.real << " +i" << c.imaginary << endl;
	return o;
}
int main()
{
	Complex a1(5, 3), b1(4,6), f1;
	f1 = a1 + b1;
	cout << f1;

	return 0;

}