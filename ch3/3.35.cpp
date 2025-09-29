#include<iostream>	
#include<string>
#include<cctype>
#include<vector>
using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::vector;
int main()
{
	int a[10]{1};
	int b[10]{1,2};
	bool c = true;
	for (int t = 0; t != 10; t++)
	{
		if (a[t]!=b[t])
		{
			c = false;
		}
	}
	if (c)
	{
		cout << "equal";
	}
	else
	{
		cout << "inequal";
	}
}