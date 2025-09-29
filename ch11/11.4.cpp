#include<iostream>
#include<unordered_map>
using namespace std;
void lower(string& i)
{
	for (auto& t : i)
	{
		if (t <= 'Z' && t>= 'A')
		{
			t += 32;
		}
	}
}
int main()
{
	unordered_map<string,int> count;
	string word;
	while (cin >> word)
	{
		size_t n = word.size();
		for (size_t t = 0; t != n; t++)
		{
			if (word[t] == ',' || word[t] == '.')
			{
				word.erase(t);
			}
		}
		lower(word);
		count[word]++;
	}
	for (auto i : count)
		cout << i.first << " " << i.second << endl;
}