#include<list>
#include<deque>
#include<string>
#include<vector>
#include<iostream>
#include<forward_list>
#include<iterator>
#include<fstream>
using namespace std;
struct calender
{
	unsigned year;
	unsigned month;
	unsigned day;
	string signal{ ", /" };
	string m{ "JFMASOND" };
	vector<string>MONTH{ "Jan", "Feb", "Mar", "Apr", "May", "Jun",
						"Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
	calender(string data)
	{
		if (data.find_first_of(m) != string::npos)
		{
			size_t pos1 = data.find_first_of(signal);
			string temp(data, 0, 3);
			for (int i = 0; i != MONTH.size(); i++)
			{
				if (temp == MONTH[i])
				{
					month = i + 1;
					break;
				}
			}
			size_t pos2 = data.find_first_of(signal, pos1 + 1);
			string DAY(data, pos1 + 1, (pos2 - pos1) - 1);
			day = stoi(DAY);
			pos2= data.find_last_of(signal);
			string Year(data, pos2 + 1, 4);
			year = stoi(Year);
		}
		else
		{
			size_t pos1 = data.find_first_of(signal);
			string mon(data, 0, pos1);
			month = stoi(mon);
			size_t pos2 = data.find_first_of(signal, pos1 + 1);
			string DAY(data, pos1 + 1, (pos2 - pos1) - 1);
			day = stoi(DAY);
			pos2 = data.find_last_of(signal);
			string Year(data, pos2 + 1, 4);
			year = stoi(Year);
		}
	}
	void Print()
	{
		cout << year << "\n" << month << "\n" << day << "\n";
	}
};
int main()
{
	calender inform("Jan 1, 1900");
	inform.Print();
}