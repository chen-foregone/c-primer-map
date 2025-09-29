#include<iostream>
#include<sstream>
#include<vector>
#include<list>
#include<map>
#include<string>
#include<algorithm>
using  std::map;
using std::string;
using std::list;
using std::vector;
int main()
{
	string words;
	vector<string>temp;
	map<string, vector<int>>hang;
	string signal;
	int num = 1;
	while (std::getline(std::cin, words))
	{
		std::istringstream word(words);
		temp.clear();
		while (word>>signal)
		{
			if(std::find(temp.begin(), temp.end(), signal)== temp.end())
			{
				temp.push_back(signal);
			}
		}
		for(auto &t:temp)
		{
			hang[t].push_back(num);
		}
		num++;
	}
	for (auto i : hang)
	{
		std::cout << i.first << " ";
		for (auto t : i.second)
		{
			std::cout<<t;
		}
		std::cout << std::endl;
	}
}