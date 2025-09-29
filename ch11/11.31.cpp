#include<map>
#include<string>
#include<iostream>
int main()
{
	std::multimap<std::string, int>count{ { "nihao",9 }, { "hao",5 } };
	count.find("niahao");
	count.erase("nihao");
	for(auto beg=count.equal_range("hao").first;beg!=count.equal_range("hao").second;beg++ )
    std::cout<<beg->second;
}