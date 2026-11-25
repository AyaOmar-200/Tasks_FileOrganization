using namespace std;
#include <iostream>
#include<string>
#include<fstream>

int main()
{
	ofstream obj1("welcome.txt");

	if (!obj1.is_open())
	{
		cout << "Erorr" << endl;
	}
	else
	{
		obj1 << "Hello Everybody";

		obj1.seekp(11, ios::beg);
		obj1 << "one" << endl;

		obj1.close();
	}

	string text;
	ifstream obj2("welcome.txt");

	getline(obj2, text);

	obj2.close();

	ofstream obj3("welcome.txt", ios::app);

	if (!obj3.is_open())
	{
		cout << "Erorr" << endl;
	}
	else
	{
		obj3 << text;
		obj3.close();
	}
}
