# include <iostream>

using namespace std;

int main()
{
	int roadRunnerToSafty,speedOfRoadrunner,coyoteSpeed;
	cout<<"Enter the roadRunnerToSafty : ";
	cin>>roadRunnerToSafty;
	cout<<"Enter speed of road runner : ";
	cin>>speedOfRoadrunner;
	cout<<"Enter speed of coyote : ";
	cin>>coyoteSpeed;
	int coyoteToSafty=roadRunnerToSafty+50;
	
	while(roadRunnerToSafty>=0)
	{
		roadRunnerToSafty-=speedOfRoadrunner;
		coyoteToSafty-=coyoteSpeed;
		if(roadRunnerToSafty<=0)
		{
			cout<<"Meep Meep";
			break;
		}
		if(roadRunnerToSafty>=coyoteToSafty)
		{
			cout<<"Yum";
			break;
		}
	}
	
	return 0;
}