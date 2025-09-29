#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main()
{
	string i;
	string t;
	while (cin >> i)
	{
		if (i == t)
		{
			cout <<i;
			break;
		}
		else
		{
			t = i; 
			cout << "inequal";
		}
	}
}
