#include<map>
#include<iostream>
int main()
{
    std::map<std::string,int>word_count;
    std::map<const std::string,int>::iterator map_it=word_count.begin();
}