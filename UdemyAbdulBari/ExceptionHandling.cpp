#include <iostream>
#include <string>
#define MSG(x) #x;

using namespace std;

class MyException1
{

};
class MyException2 : public MyException1
{

};
int main()
{
	int a = 10, b = 0, c;
	try
	{
		if (b == 0)
			throw MyException1();
		c = a / b;
		cout << c;
	
	}
	catch (int e)
	{
		cout << "Division by zero: int";
	}
	catch (double e)
	{
		cout << "Division by zero: double";
	}
	catch (MyException2 e)
	{
		cout << "MyException2";
	}
	catch (MyException1 e)
	{
		cout << "MyException1";
	}
	catch (...)
	{
		cout << "unknown";
	}
	cout << MSG(Hello);
}