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
void up(string& i) {
	for (auto& t : i)
	{
		t = toupper(t);
	}
}
int main()
{
	string t;
	vector<string> a;
	while (getline(cin, t))
	{
		a.push_back(t);
	}
	for (auto i = a.begin(); i != a.cend() && !i->empty(); i++)
	{
		up(*i);
		cout << *i << "\n";
	}
}