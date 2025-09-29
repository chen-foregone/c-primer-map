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
	while (cin>>t)
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
	string c;
	for (auto a : t)
	{
		if (!std::ispunct(a))
		{
			if (c.empty())
			{
				c = a;
			}
			else
			{
				c = c+ a;
			}
		}
	}
	cout << c;
}