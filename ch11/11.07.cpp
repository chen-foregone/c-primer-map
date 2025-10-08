#include<iostream>
#include<map>
#include<vector>
#include<string>
using  std::map;
using std::string;
struct family {
	map <string, std::vector<string>>fam;
	void add(string name, string kid)
	{
		fam[name].push_back(kid);
	}
};
int main()
{
	family a;
	for (auto t : a.fam)
		std::cout << t.first;
}