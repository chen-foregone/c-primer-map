#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main()
{
	int cot = 1;
	string i;
	string t;
	vector<string>a;
	vector<int>cnot;
	if (cin >> i)
	{
		t = i;
		a.push_back(i);
		while (cin >> i)
		{
			if (i == t)
			{
				++cot;
			}
			else
			{
				t = i;
				cnot.push_back(cot);
				a.push_back(i);
				cot = 1;
			}
			cnot.push_back(cot);
			a.push_back(i);
		}
	}
	int max = cnot[0];
	int s = 0;
	int v = 0;
	for (v; v < cnot.size(); v++)
	{
		if (max < cnot[v])
		{
			max = cnot[v];
			s = v;
		}
	}
	if (s == 0)
	{
		cout << "equal";
	}
	else
	{
		cout << a[s] << max;
	}
}