#include <iostream>
#include <fstream>

using namespace std;

class Student
{
public:
	string name;
	int roll;
	string branch;

	friend ofstream& operator<<(ofstream& ofs, Student& s);
	friend ifstream& operator>>(ifstream& ifs, Student& sx);
};
ofstream& operator<<(ofstream& ofs, Student& s)
{
	ofs << s.name << endl;
	ofs << s.roll << endl;
	ofs << s.branch << endl;
	return ofs;
}

ifstream& operator>>(ifstream& ifs, Student& sx)
{
	ifs >> sx.name;
	ifs >> sx.roll;
	ifs >> sx.branch;
	return ifs;
}

int main()
{
	/*Student s1;
	s1.name = "Saad"; s1.roll = 1; s1.branch = "ESE";
	ofstream ofs("Student.txt", ios::trunc);
	ofs << s1;
	ofs.close();*/

	Student s2;
	ifstream ifs("Student.txt");
	ifs >> s2;
	cout << s2.name << s2.roll << s2.branch << endl;

	ifs.close();
}