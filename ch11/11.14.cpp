#include<iostream>
#include<map>
#include<vector>
#include<string>
using  std::map;
using std::string;
struct family {
	map <string, std::vector<string>>fam;
	std::vector<std::pair<string, string>>birthday;
	void add_kid(string name, string kid)
	{
		fam[name].push_back(kid);
	}
	void add_bithday(string name, string birth)
	{
		birthday.push_back({name,birth});
	}
};
int main()
{
	family a;
	for (auto t : a.fam)
		std::cout << t.first;
}