# include <iostream>

using namespace std;

template <class T>

class myClass
{
	public:
		myClass(T a);
	private:
		T a;
};
//-------------------------------------------------
template <class T>
myClass<T>::myClass(T a)
{
	cout<<"The input value is : "<<a;
}
//-------------------------------------------------
int main()
{
	myClass<char> mC(65);
	
	return 0;
}