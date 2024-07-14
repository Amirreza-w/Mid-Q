# include <iostream>
# include <unordered_map>
# include <sstream>
# include <iomanip>

using namespace std;

double calculate_total_cost(const string &);

int main()
{
	string order="Coke Pizza";
	
	getline(cin,order);
	
	double total_cost=calculate_total_cost(order);
	
	cout<<total_cost<<endl;
	
	return 0;
}
//-----------------------------------------------------------------------
double calculate_total_cost(const string &order)
{
	unordered_map<string,double>
	prices={
			   {"Nachos",6.00}
			  ,{"Pizza",6.00}
			  ,{"Cheeseburger",10.00}
			  ,{"Water",4.00}
			  ,{"Coke",5.00}		
	};
	
	double tax_rate=0.07;
	istringstream is(order);
	string item;
	double total_cost=0;
	
	while(is>>item)
	{
		if(prices.find(item)!=prices.end())
		{
			total_cost+=prices[item];
		}
		else
		{
			total_cost+=prices["Coke"];
		}
	}
	
	double total_cost_with_tax=total_cost * (1+tax_rate);
	
	return total_cost_with_tax;
}