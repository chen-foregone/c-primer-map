#include<iostream>
	int main()
	{
		double all_venue = 0;
		int cnot = 0;
		std::string isbn = "";
		double price = 0;
		unsigned int sole = 0;
		double venue = 0;
		while (std::cin >> isbn >> price >> sole)
		{
			double venue = sole * price;
			all_venue += venue;
		}
		std::cout << all_venue;
	}