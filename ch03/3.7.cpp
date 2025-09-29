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
	decltype(i.size()) a=0;
	if (!t.empty())
	{
		while (a < t.size())
		{
		    t[a] = 'x';
			a++;
		}
	}
	cout << t;
}