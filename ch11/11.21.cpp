#include<iostream>
#include<map>
int main()
{
    std::map<std::string,size_t>word_count;
    std::string str;
    while(std::cin>>str)
    ++word_count.insert({str,0}).first->second;
}