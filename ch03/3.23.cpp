#include<iostream>	
#include<string>
#include<cctype>
#include<vector>
using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::vector;
using std::getline;
void up(string& i)
{
	for (auto& t : i)
	{
		t = toupper(t);
	}
}
int main()
{
	vector<int> a(10, 1);
	for (auto i = a.begin(); i != a.cend(); ++i)
	{
		*i = (*i) * 2;
		cout << *i << "\n";
	}

}