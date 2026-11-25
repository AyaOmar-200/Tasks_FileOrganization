
using namespace std;
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>


int main()
{
	string name;
	ifstream obj1("main.txt");

	vector <string> vec;

	if (obj1.good())
	{
		while (getline(obj1, name))
		{
			vec.push_back(name);
		}

		obj1.close();
	}
	else
	{
		cout << "Reading Erorr" << endl;
	}

	sort(vec.begin(), vec.end());

	ofstream obj2("main.txt");

	if (obj2.fail())
	{
		cout << "Writing Erorr" << endl;
	}
	else
	{
		for (int i = 0; i < vec.size(); i++)
		{
			obj2 << vec[i] << endl;
		}

		obj2.close();
	}
}
