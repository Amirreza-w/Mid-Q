# include <iostream>

using namespace std;

int main()
{
	string ch;
	getline(cin,ch);
	
	int deja[26];
	for(int i=0;i<28;i++)
	{
		deja[i]=0;
	}
	
	for(int i=0;ch[i];i++)
	{
		if((ch[i]>='a'||ch[i]>='A') && (ch[i]<='z' || ch[i]<='Z'))
		{
			deja[(int)toupper(ch[i])-65]++;			
		}
	}
	
	for(int j=0;j<26;j++)
	{
		cout<<deja[j]<<endl;
	}
	
	bool u=false;	
	
	for(int j=0;j<26;j++)
	{
		if(deja[j]>1)
		{
			cout<<"Deja Vu";
			u=true;
			break;
		}
	}
	if(!u)
	{
		cout<<"Unique";
	}
	

	
	
	
	return 0;
}