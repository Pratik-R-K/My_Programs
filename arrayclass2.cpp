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
			this->arr = new int[this->size];
			std::cout<<"Array of size"<<size<<" created"<<endl;
		}
		void Accept(){
			cout<<"\n\n\t Enter "<<size <<" Elements ";
			for(int i=0;i<size;i++)
				cin>>arr[i];
		}
		
		void SetIndex(int i, int val)
		{		
			arr[i] = val;	
		}

		void DisplayRecords()
		{
			cout<<"Array elements : ";
			for(int i=0; i<size; i++){
				cout<<this->arr[i]<<" "<<endl;
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
	obj.Accept();

	int i, val;
	cout<<"Enter values for i and val";
	cin>>i;
	cin>>val;
	obj.SetIndex(i, val);
	
	obj.DisplayRecords();
	return 0;
}
