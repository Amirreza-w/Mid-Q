# include <iostream>

using namespace std;

int main()
{
	cout<<"Enter 6 integer and get the quantity of rice crispies : \n";
	int b[5];
	for(int i=0;i<6;i++)
	{
		cout<<"Enter b["<<i<<"] : ";
		cin>>b[i];
	}
	for(int j=0;j<6;j++)
	{
		if(b[j]%3==0)
		{
			cout<<"Pop ";
		}
		else if(b[j]%2==0)
		{
			cout<<"Crackle ";
		}
		else
		{
			cout<<"Snap ";
		}
	}
	return 0;
}