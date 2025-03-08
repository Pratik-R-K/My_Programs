#include<iostream>
#include<cstring>
using namespace std;

struct student{
	int rollNo;
	char name[50];
	
};

void Sort(student s[], int size);
void DisplayRecords(student s[],int size);
void AcceptRecords(student s[],int size);


int main()
{
	int size;
	cout<<"Enter Size of no. of students";
	cin>>size;

	student s[size];
	AcceptRecords(s, size);
	Sort(s,size);
	DisplayRecords(s,size);	
	return 0;
	
}

void AcceptRecords(student s[], int size)
{
	
	for(int i=0; i<size; i++)
	{
		cout<<"\nEnter RollNo. :";
		cin>>s[i].rollNo;
		cin.ignore();
		cout<<"\nEnter Name :";
		cin.getline(s[i].name,50);
	}
}	

void Sort(student s[], int size)
{
	student temp;
	for(int i=0; i<=size-1; i++)
	{
		for(int j=i+1; j<=size-1; j++)
		{
			if(s[i].rollNo>s[j].rollNo)
			{	
				temp=s[i];
				s[i]=s[j];
				s[j]= temp;
			}
		}
	} 
}		

void DisplayRecords(student s[], int size)
{
	for(int i=0; i<size; i++)
	{
		cout<<"\nRoll No: "<<s[i].rollNo;
		cout<<"\nName : "<<s[i].name;
	}
}


	

