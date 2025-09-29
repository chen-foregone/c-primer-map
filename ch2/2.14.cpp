#include<iostream>
#include<string>
	int main()
	{
		std::string source;
		double all_revenue = 0;
		int cnot = 0;
		std::string isbn = "";
		double price = 0;
		unsigned int sold = 0;
		double revenue = 0;
		if (std::cin >> isbn >> sold >> price)
		{
			source=isbn;

			while (std::cin >> isbn >> sold >> price)
		{
			
			if(isbn==source)
			{
			double revenue = sold * price;
			all_revenue += revenue;
			cnot += sold;
		    }
			else
			{
				std::cout << cnot << "\t" << all_revenue;
				source = isbn;
			}
		}
		}
		std::cout << cnot << "\t" << all_revenue;
	}