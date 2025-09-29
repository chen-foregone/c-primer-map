#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
int main()
{
	vector<string> v;
	ofstream temp("file", fstream::out);
	if (temp.is_open())
	{
		string a;
		while (cin>>a)
		{
			temp << a;
		}
		temp.close();
	}
	else
	{
		cout << "error";
	}
	ifstream print("file");
	if (print.is_open())
	{
		string b;
		while (print>>b)
		{
			v.push_back(b);
		}
	}
	else
	{
		cout << "error";
	}
	for (string t : v)
	{
		cout << t<<"\n";
	}
}