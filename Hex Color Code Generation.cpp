# include <iostream>
# include <iomanip>

using namespace std;

void HexadecimalColor(int,int,int);

int main()
{
	int R,G,B;
	cout<<"Enter three code color : ";
	cin>>R>>G>>B;
	HexadecimalColor(R,G,B);
	
	return 0;
}
//---------------------------------------------------------
void HexadecimalColor(int r,int g,int b)
{
	cout<<'#'<<hex<<r<<g<<b;
}