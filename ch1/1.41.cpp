#include<iostream>
#include<string>
using std::cout;
using std::string;
using std::cin;
int main()
{
	int cnot = 0;
	cout << "input"<<"\n";
	int a = 0;
	int b = 0;
	cin >> a >> b;
	if (a < b)
	{
		while (a <= b)
		{
			cnot += a;
			a++;
		}
		cout << cnot;
	}
	else if (b < a)
	{
		while (b <=a)
		{
			cnot += b;
			b++;
		}
		cout << cnot;
	}
	else
	{
		cout << a;
	}