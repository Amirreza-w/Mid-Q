# include <iostream>
# include <conio.h>

using namespace std;

template <class T>
T Max(T a,T b)
{
	if(a>b)
	{
		return a;
	}
	
	return b;
}

int main()
{
	int a,b;
	cout<<"Enter two integer and take the larger one :\n";
	cin>>a>>b;
	cout<<Max(a,b)<<endl;
	
	double c,d;
	cout<<"Enter double integer and take the larger one :\n";
	cin>>c>>d;
	cout<<Max(c,d)<<endl;

	char e,f;
	cout<<"Enter char integer and take the larger one :\n";
	cin>>e>>f;
	cout<<Max(e,f)<<endl;
	
	return 0;
}