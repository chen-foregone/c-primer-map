#include<iostream>
#include<string>
using std::cout;
using std::string;
	int main()
	{
		int i = 10;
		int cont = 0;
		while (i >= 0)
		{
			cont += i;
			i--;
		}
		cout << cont;
	}
