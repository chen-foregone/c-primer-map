#include<iostream>
#include<map>
int main()
{
	std::map<int, int>nums{ { 1,2 } };
	nums[1] = 3;
	std::cout << nums[1];
}