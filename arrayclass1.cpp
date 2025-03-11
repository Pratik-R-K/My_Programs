#include <iostream>
using namespace std;

class Array
{
	private:
		int *arr;
		int size;
	public: 
		Array()
		{
			this->arr=nullptr;
			this->size = 0;
		}
		Array(int size)
		{
			this->size = size;
			arr = new int[size];
			std::cout<<"Array of size"<<size<<" created"<<endl;
		}
		
		void AcceptRecords()
		{
			for(int i=0; i<this->size; i++)
			{
				cin>>arr[i];
			}
					
		}

		void DisplayRecords()
		{
			cout<<"Array elements : ";
			for(int i=0; i<size; i++){
				cout<<arr[i]<<" "<<endl;
			}
		}	
		~Array()
		{
			delete[] arr;
		}	
};


int main()
{
	int size;
	cout<<"Enter size of array"<<endl;
	cin>>size;

	Array obj(size);
	cout<<"Enter values into array"<<endl;
	obj.AcceptRecords();
	obj.DisplayRecords();
	return 0;
}
