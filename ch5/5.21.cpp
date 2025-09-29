#include <iostream>
#include <vector>
#include <cstdlib>
#include<string>
using namespace std;

int main()
{
	string i;
	string t;
	while (cin >> i)
	{
		if (islower(i[0]))
		{
			continue;
		}
		if (i == t)
		{
			cout << i;
		}
		else
		{
			t = i;
		}
	}
}