#include<string>
#include<iostream>
using namespace std;
int main()
{
	string str1,str2;
	cin >> str1 >> str2;
	string str = str1 + str2;
	auto pos = new string[str.size()];
	for (size_t t = 0; t != str.size(); t++)
	{
		*(pos + t) = str[t];
	}
	for (size_t t = 0; t != str.size(); t++)
	{
		cout << *(pos + t);
	}
}
