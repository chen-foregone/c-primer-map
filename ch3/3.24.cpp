#include<iostream>	
#include<string>
#include<cctype>
#include<vector>
using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::vector;
using std::getline;
int main()
{
	int i;
	vector<int>a;
	vector<int>aa;
	while (cin >> i)
	{
		a.push_back(i);
	}
	if (a.size() % 2 == 0)
	{
		for (int t = 0; t != a.size() / 2; t++)
		{
			auto x = a.cbegin() + t, y = a.cend() - 1 - t;
			cout << *x + *y << " ";
		}
	}
	else
	{
		for (int t = 0; t != (a.size()+1) / 2-1; t++)
		{
			auto x = a.cbegin() + t, y = a.cend() - 1 - t;
			cout << *x + *y << " ";
		}
		cout << a[(a.size() + 1) / 2-1];
	}
	/*for (int t = 0; t != a.size() - 3; t += 2)
	//{相邻两数相加，数量是偶数个。
	//	auto x = a.cbegin() + t, y = a.cbegin() +1+t;
	//	cout << *x + *y << " ";
	}*/

}