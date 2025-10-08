#include<iostream>
#include<string>
using std::cout;
using std::string;
	int main()
	{
		int i = 50;
		int cont = 0;
		while (i <= 100)
		{
			cont += i;
			i++;
		}
		cout << cont;
	}