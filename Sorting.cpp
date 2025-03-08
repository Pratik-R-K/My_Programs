#include<iostream>
using namespace std;

int main()
{
	int num;
	
	cout<<"Enter size of array :"<<endl;
	
	cin>>num;
	int arr[num];
	cout<<"Enter the elements in array:"<<endl;
	for(int i=0; i<=num-1; i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Array= ";
	for(int i=0; i<=num-1; i++)
	{
		cout<<" "<<arr[i];
	}
	
	
	int temp=0;	
	for(int i=0; i<=num-1; i++)
	{
		for(int j=i; j<=num-1; j++)
		{
			if(arr[i]>arr[j])
			{	
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	} 
	cout<<"Sorted Array= ";
	for(int i=0; i<=num-1; i++)
	{
		cout<<" "<<arr[i];
	}			
						
	return 0;
}
