#include<iostream>
struct Sales_data {
	std::string isbn="";
	double price=0;
	unsigned int sole = 0;
	double venue = 0;
};
int main()
{   
	double all_venue;
	double avege_price;
	int cnot;
	Sales_data book1;
	Sales_data book2;
	std::cin >> book1.isbn >> book1.sole >> book1.price;
	std::cin >> book2.isbn >> book2.sole >> book2.price;
	book1.venue= book1.sole * book1.price;
	book2.venue = book2.sole * book2.price;
	cnot = book1.sole + book2.sole;
	if (book1.isbn == book2.isbn)
	{
		if (cnot == 0)
		{
			std::cout << "error";
		}
		else
		{   
		    all_venue = book1.venue+ book2.venue;
			avege_price= all_venue/ cnot;
		    std::cout << cnot << "\t" << avege_price << "\n"
			<< all_venue;
		}
	}
	else
	{
		std::cout << "error";
	}
	return 0;
}
