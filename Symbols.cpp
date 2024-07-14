# include <iostream>

using namespace std;

int main()
{
	string str;
	cout<<"Enter sentence : ";
	getline(cin,str);
	
	for(int i=0;str[i];i++)
	{
		if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z')||str[i]==' ')
		{
			cout<<str[i];
		}
	}
	
	return 0;
}