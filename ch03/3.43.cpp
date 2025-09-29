#include<iostream>	
#include<string>
#include<cctype>
#include<vector>
#include<cstring>
using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::vector;
int main()
{
	int a[3][4] = { 1,2,3,4,5,6,7,8,9,1,2,3 };
	for (int (&i)[4] : a)
	{
		for (auto t : i)
		{
			cout << t;
		}
	}
	for (int (*i)[4] = a; i != a + 3; i++)
	{
		for (int* t = *i; t != *i + 4; t++)
		{
			cout << *t;
		}
	}
	for (int i = 0; i != 3; i++)
	{
		for(int t=0;t!=4;t++)
		{
			cout << a[i][t];
		}
	}
}