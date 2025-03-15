#include <iostream>
#include <typeinfo>  //for typeid()
using namespace std;

template <typename T>
class Array
{
	T *arr;
	int size;

	public:
	Array()
	{
	}

	Array(int size)
	{
		this->size = size;
		arr = new T[size];
	}
	
	~Array()
	{
		delete []arr;
	}

	void Accept()
	{
		cout<<"Enter elements in array of type "<<typeid(T).name()<<endl;
		for(int i=0; i<size; i++)
		{
			cin>>arr[i];
		}
	}

	void Display()
	{
		cout<<"Array Elements : ";
		for(int i=0; i<size; i++)
		{
			cout<<" "<<arr[i];
		}	
	}
};

int main()
{
	Array<int> intArr(3);
	intArr.Accept();
	intArr.Display();

	Array<float> floatArr(3);
	floatArr.Accept();
	floatArr.Display();

	Array<double> doubleArr(3);
	doubleArr.Accept();
	doubleArr.Display();

}	

