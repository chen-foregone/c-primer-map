#include<string>
#include<iostream>
using namespace std;
int main()
{
	size_t length = 0;
	cout << "how long do you want";
	cin >> length;
	auto pos = new string[length];
	string str;
	cin >> str;
	if (str.size() > length)
	{
		string temp = str.substr(0, length);
		for (size_t t = 0; t != str.size(); t++)
		{
			*(pos + t) = temp[t];
		}
		cout << "too long";
	}
	else
	{
		for (size_t t = 0; t != str.size(); t++)
		{
			*(pos + t) = str[t];
		}
	}
}
/*直接处理
#include<string>
#include<iostream>
using namespace std;
int main()
{
	string str1,str2;
	cin >> str1 >> str2;
	string str = str1 + str2;
	auto pos = new string[str.size()];
}
*/