# include <iostream>
# include <string.h>
# include <sstream>

using namespace std;

int main()
{
	char *boxItems;
	boxItems=new char[100];
	int time=5;
	cout<<"Enter object inside the boxes : ";
	cin.getline(boxItems,100);
	
	char *tokstring;
	
	tokstring = strtok(boxItems,",");
	
	while(strcmp(tokstring,"Declaration of independence"))
	{
		time+=5;
		cout<<tokstring<<',';
		tokstring = strtok(0,",");
	}
	cout<<"Time is "<<time<<" min";
	return 0;
}