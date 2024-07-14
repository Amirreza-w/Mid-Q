# include <iostream>

using namespace std;

template <class T>
class Queue
{
	public:
		Queue(int);
		void add(T);
		void get(int);
	private:
		T *arr;
		int count;
};
//-------------------------------------
template <class T>
Queue<T>::Queue(int size)
{
	arr = new T[size];
	count = 0;
}

template <class T>
void Queue<T>::add(T elem)
{
	arr[count] = elem;
	count++;
}

template <class T>
void Queue<T>::get(int index)
{
	for(int i=0;i<index;i++)
	{
		if(i==index-1)
		{
			cout<<arr[i];
		}
		else
		{
			cout<<arr[i]<<"->";
		}			
	}
}
//-------------------------------------
int main()
{
	Queue<string> q(4);
	q.add("James");
	q.add("Andy");
	q.add("Amy");
	q.get(2);
	cout<<"->";
	Queue<int> n(2);
	n.add(42);
	n.add(33);
	n.get(2);
	
	
	
	return 0;
}