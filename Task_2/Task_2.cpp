using namespace std;
#include <iostream>
#include<string>
#include<fstream>
#include <vector>


struct person
{
	string name;
	int age;
};


int main()
{
	int x, y = 0;
	cout << "enter number of persons" << endl;
	cin >> x;
	cout << "===================" << endl;

	ofstream obj1("data.txt", ios::app);

	person obj;

	cout << "enter data" << endl;
	cout << "=============" << endl;
	while (y < x)
	{
		cout << "Name : ";
		cin.ignore();
		getline(cin, obj.name);
		obj1 << obj.name;

		cout << "Age : ";
		cin >> obj.age;
		obj1 << " " << obj.age << endl;

		cout << "===================" << endl;

		y++;
	}

	obj1.close();

	ifstream obj2("data.txt");


	vector <person> vec;


	while (obj2 >> obj.name >> obj.age)
	{
		vec.push_back(obj);
	}

	obj2.close();

	int max = vec[0].age;
	int min = vec[0].age;

	for (int i = 0; i < vec.size(); i++)
	{

		if (vec[i].age >= max)
		{
			max = vec[i].age;
		}

		if (vec[i].age <= min)
		{
			min = vec[i].age;
		}
	}

	ofstream obj3("results.txt");

	for (int i = 0; i < vec.size(); i++)
	{
		if (max == vec[i].age)
		{
			obj3 << "older person : " << vec[i].name << " , At Age : " << max << endl;
		}

		if (min == vec[i].age)
		{
			obj3 << "younger person : " << vec[i].name << " , At Age : " << min << endl;
		}
	}

	obj3.close();
}
