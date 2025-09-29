#include<iostream>
#include<map>
#include<vector>
#include<string>
using  std::map;
using std::string;
struct family {
	std::multimap <string, string>fam;
	void add(string name, string kid)
	{
		fam.emplace(name,kid);
	}
};
int main()
{
	family a;
	for (auto t : a.fam)
		std::cout << t.first;
}