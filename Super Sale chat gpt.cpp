# include <iostream>
# include <vector>
# include <sstream>
# include <cmath>
# include <algorithm>

using namespace std;

int main()
{
	string input;
	getline(cin,input);
	
	vector<double> prices;
	stringstream ss(input);
	string temp;
	
	while(getline(ss,temp,','))
	{
		prices.push_back(stod(temp));
	}
	
	if(prices.empty())
	{
		cout<<"0"<<endl;
	}
	
	double max_price = *max_element(prices.begin(),prices.end());
	
	double total_saving=0.0;
	
	for(const double &price : prices)
	{
		if(price != max_price)
		{
			total_saving += price * 0.30;
		}
	}
	
	total_saving *= 1.07;
	
	int final_saving = static_cast<int>(total_saving);
	
	cout<<final_saving<<endl;
	
	return 0;
}