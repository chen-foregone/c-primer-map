#include <iostream>
#include <vector>
#include<string>
#include<initializer_list>
using namespace std;
void out(const vector<int>& a,vector<int>::iterator i)
{
	if(i != a.end())
	{
		cout << *i;
		i++;
		out(a, i);
	}
}
int main()
{
	vector<int>a{4, 54, 8, 6, 32};
	auto i = a.begin();
	out(a, i);
}