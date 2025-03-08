#include<iostream>
#include<cstring>
using namespace std;

struct student{
	int rollNo;
	char name[50];
	
};

void DisplayRecords(student s[],int size);
void AcceptRecords(student s[],int size);


int main()
{
	int size;
	cout<<"Enter Size of no. of students";
	cin>>size;

	student s[size];
	AcceptRecords(s, size);
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

void DisplayRecords(student s[], int size)
{
	for(int i=0; i<size; i++)
	{
		cout<<"\nRoll No: "<<s[i].rollNo;
		cout<<"\nName : "<<s[i].name;
	}
}




