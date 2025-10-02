#include<map>
#include<set>
#include<vector>
#include<string>
#include<fstream>
#include<sstream>
#include<iostream>
using std::string;
std::map<string, string> tran_map(std::ifstream& RULE)
{
	std::map<string, string>trans;
	string key;
	string val;
	while (RULE >> key && std::getline(RULE, val))
	{
		val = val.substr(1);
		trans[key] = val;
	}
	return trans;
}
void write(std::ifstream& words, std::map<string, string> trans)
{
	string str;
	while(std::getline(words,str))
	{
		std::istringstream WORD(str);
		string word;
		bool hang = true;
		while (WORD >> word)
		{
			if (hang)
				hang = false;
			else
				std::cout << " ";
			auto find = trans.find(word);
			if (find != trans.end())
				std::cout << find->second;
			else
				std::cout << word;

		}
	}
	std::cout << "\n";
}
int main()
{
	std::ifstream rule("rule");
	std::ifstream input("input");
	if (rule.is_open() && input.is_open())
	{
		auto trans_map = tran_map(rule);
		write(input, trans_map);
	}
	else
		std::cerr << "Error: Failed to open file(s)." << std::endl;
}