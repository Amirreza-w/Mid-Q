# include <iostream>
# include <sstream>
# include <vector>
# include <algorithm>

using namespace std;

int main()
{
	string input;
	cout<<"Enter prices of souvenirs :\n";
	getline(cin,input);
	
	vector<double> prices;
	istringstream iss(input);
	string price;
	
	while(iss>>price)
	{
		prices.push_back(stod(price));
	}
	
	if(prices.empty())
	{
		cout<<"Nothing purchesed"<<endl;
		return 0;	
	}	
	double max_price = *max_element(prices.begin(),prices.end());
	
	if(max_price*1.1>20)
	{
		cout<<"Back to the store";
	}
	else
	{
		cout<<"On to the terminal";
	}
	return 0;
}