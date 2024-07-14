# include <iostream>
# include <string.h>
# include <sstream>

using namespace std;

int main()
{
	string input;
	cout<<"Enter a sentence : ";
	
	getline(cin,input);
	
	istringstream iss(input);
	
	string word;
	
	while(iss>>word)
	{
		if(word.length()>1)
		{
			char firstchar = word[0];
			word = word.substr(1)+firstchar+"ay";
		}
		else
		{
			word+="dy";
		}
		cout<<word<<" ";
	}
	
	
	return 0;
}