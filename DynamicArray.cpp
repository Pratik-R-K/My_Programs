#include<iostream>
using namespace std;

int main()
{
	int size;

	cout<<"Enter Size for an array: ";
	cin>>size;

	int *arr = new int [size];

	cout<<"\nEnter array elements: ";
	for(int i = 0; i<size; i++)
	{
		cin>>arr[i];
	}

	cout<<"\nArray: ";
	for(int i = 0; i<size; i++)
	{
		cout<< arr[i];
	}
	
	int temp = 0;
	for(int i = 0; i<size; i++)
	{
		for(int j = i; j<size; j++)
		{
			if(arr[i] > arr[j])
			{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			}
		}
	}
	
	cout<<"\nSorted array: ";
	for(int i = 0; i<size; i++)
	{
		cout<< arr[i];
	}
	

	return 0;

}


