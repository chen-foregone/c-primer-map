#pragma once
using namespace std;
#include <iostream>
#include <vector>
#include<string>
#include<initializer_list>
struct Sales_data
{
	friend bool read(istream& a, Sales_data& t);
	friend void print( ostream& a, Sales_data& t);
private:
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0;
	double avg_price()const;
public:
	Sales_data(string b = " ", unsigned u = 0, double r = 0) :bookNo(b), units_sold(u), revenue(r) {
	}
	Sales_data(istream& a) :Sales_data()
	{
		read(a, *this);
	}
	void combine(Sales_data& t)
	{
		units_sold += t.units_sold;
		revenue += t.revenue;
	}
	const string& isbn()const
	{
		return bookNo;
	}
};
inline double Sales_data::avg_price()const
{
	return revenue / units_sold;
}
bool read(istream& a, Sales_data& t)
{
	if (a >> t.bookNo >> t.units_sold >> t.revenue)
	{
		return true;
	}
	else return false;
}
Sales_data add(Sales_data& i, Sales_data& t)
{
	Sales_data sum = i;
	sum.combine(t);
	return sum;
}
void print(ostream& a, Sales_data& t)
{
	a << t.bookNo << " " << t.units_sold << " " << t.revenue << "\n";
}
#include <iostream>
#include <vector>
#include<string>
#include<initializer_list>
#include<fstream>	
int main()
{
	ofstream write("filename", ofstream::out);
	Sales_data temp;
	if (write)
	{
		while (read(cin, temp))
		{
			print(write, temp);
		}
	}
	else
	{
		cout << "error";
	}
	write.close();
	ifstream get("filename");
	if (get.is_open())
	{
		ofstream add("filename", ofstream::app);
		Sales_data all;
		if (read(get, all))
		{
			Sales_data next;
			while (read(get, next))
			{


				if (next.isbn() == all.isbn())
				{
					all.combine(next);
				}
				else
				{
					print(add, all);
					all = next;
				}
			}
			print(add, all);
		}
		get.close();
	}
	else
	{
		cerr << "No data?!" << endl;
	}
	ifstream text("filename");
	Sales_data te;
	while (read(text,te))
	{
		print(cout, te);
	}
}