# include <iostream>

using namespace std;

template<class T,class U>
U MyMax(T a,U b)
{
	return (a>b ? a : b);
}

int main()
{	
	int a;
	double b;
	cout<<"Enter two number int and double :\n";
	cin>>a>>b;
	cout<<"The larger number is : "<<MyMax(a,b);
	return 0;
}