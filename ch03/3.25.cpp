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
	int num;
	vector<int>grade{ 0,1,2,3,4,5,6,7,8,9,10 };
	vector<int>cont(11, 0);
	vector<int>a;
	while (cin >> num)
	{
		num = num / 10;
		for (auto v : grade)
		{
			if (v == num)
			{
				cont[v]++;
			}
		}
	}
	for (int i = 0; i != 11; i++)
	{
		cout << "grade:" << i * 10 << "  " << cont[i]<<"\n";
	}
}