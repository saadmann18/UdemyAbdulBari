#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream outfile("My.txt");
	outfile << "hello" << endl;
	outfile << 30 << endl;
	outfile.close();

	ifstream infile("My.txt");
	if (infile.is_open()) { cout << "file is open" << endl; }
	string s;
	int x;
	infile >> s;
	infile >> x;

	cout << s <<" "<< x << endl;

	if (infile.eof())
		cout << "end of file reached" << endl;
	infile.close();

	return 0;
}