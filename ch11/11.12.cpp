#include<string>
#include<vector>
#include<utility>
#include<iostream>
using namespace std;
int main()
{
	vector<pair<string, int>>record;
	string str;
	int num;
	while (cin >> str >> num)
	{
		record.emplace_back(str, num);
	}
}