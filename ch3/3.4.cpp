#include<iostream>
#include<string>
using std::cout;
using std::string;
using std::cin;
using std::endl;
int main()
{
	string i;
	string t;
	getline(cin, i);
	getline(cin, t);
	if (i > t)
	{
		cout << i << "\n";
	}
	else if (i == t)
	{
		cout << t << " " << i << "\n";
	}
	else
	{
		cout << t << "\n";
	}

}