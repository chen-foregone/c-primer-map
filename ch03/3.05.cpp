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
	while(cin >> i)
	{
		t += i;
	}
	cout << t;
}

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
	while (cin >> i)
	{
		if (t.empty())
		{
			t = i;
		}
		else
		{
			t = t + " " + i;
		}
	}
	cout << t;
}