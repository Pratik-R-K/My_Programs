
#include<iostream>
using namespace std;

int max(int arr[], int num);
int min(int arr[], int num);
int secondMax(int arr[], int num);
int secondMin(int arr[], int num);


int main()
{
	int num;
	
	cout<<"Enter size of array :"<<endl;
	
	cin>>num;
	int arr[num];
	cout<<"\nEnter the elements in array:";
	for(int i=0; i<=num-1; i++)
	{
		cin>>arr[i];
	}
	
	cout<<"\nArray= ";
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
	
	cout<<"\nSorted Array= ";
	for(int i=0; i<=num-1; i++)
	{
		cout<<" "<<arr[i];
	}
	
	if(num>=1)
	{
	cout<<"\nMaximum value = "<<max(arr, num);
	cout<<"\nMinimum value = "<<min(arr, num);
	cout<<"\nSecond Maximum value = "<<secondMax(arr, num);	
	cout<<"\nSecond Minimum Value = "<<secondMin(arr, num);
	}
	else
	{
	cout<<"\nInvalid Input";
	}				
	return 0;
}

int max(int arr[], int num)
	{
		return arr[num-1];
	}
int min(int arr[], int num)
	{
		return arr[0];
	}
int secondMax(int arr[], int num)
	{
		return arr[num-2];
	}
int secondMin(int arr[], int num)
	{
		return arr[1];							
	}




