# include <iostream>
# include <conio.h>
# include <string.h>
# include <assert.h>

using namespace std;

class Translator
{
	friend ostream &operator<<(ostream &output,Translator &right);
	friend istream &operator>>(istream &output,Translator &right);
	public:
		Translator(const char * ="");
		void setString(const char *);
		void translateSentence();
	private:
		char *sPtr;
		int size;
};
//----------------------------------------------------------
Translator::Translator(const char *sen)
{
	setString(sen);
}

void Translator::setString(const char *SEN)
{
	size=strlen(SEN+1);
	sPtr=new char[size];
	assert(sPtr!=nullptr);
	strcpy(sPtr,SEN);
}

void Translator::translateSentence()
{
	int i=strlen(sPtr+1);
	for(i;i>=0;i--)
	{
		if((sPtr[i]>='A' && sPtr[i]<='z') || sPtr[i]==' ')
		{
			cout<<sPtr[i];			
		}
	}
}

ostream &operator<<(ostream &output,Translator &right)
{
	right.translateSentence();
	return output;
}

istream &operator>>(istream &input,Translator &right)
{
	cout<<"Enter the code : ";
	input.getline(right.sPtr,100);
	return input;
}
//----------------------------------------------------------
int main()
{
	Translator T;
	cin>>T;
	cout<<T;
		
	return 0;
}