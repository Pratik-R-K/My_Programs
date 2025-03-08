#include<iostream>
using namespace std;

class Employee
{
	public:
		string empNo;
		string name;
		float sal;
		string dept;

		Employee()
		{
			this->empNo=empNo;
			this->name=name;
			this->sal=sal;
			this->dept=dept;
		}

	void AcceptRecords()
	{
		cout<<"\nEnter the Employee No: ";
		cin>>empNo;
		cout<<"Enter Employee Name: ";
		cin>>name;
		cout<<"Enter Employee Salary: ";
		cin>>sal;
		cout<<"Enter Department: ";
		cin>>dept;
	}

	void DisplayRecords()
	{
		cout<<"\nEmployee Number : "<<empNo<<endl;
		cout<<"Employee Name : "<<name<<endl;
		cout<<"Employee Salary : "<<sal<<endl;
		cout<<"Employee Department : "<<dept<<endl;
	}
};
void sort(Employee emp[], int size);

int main()
{
	int size;
	cout<<"Enter No of Employees:";
	cin>>size;
	
	Employee* emp = new Employee[size];

	for(int i=0; i<size; i++)
	{
		cout<<"\nEnter "<<i<<" Employee Details";
		emp[i].AcceptRecords();
		
	}
	
	sort(emp, size);
	
	for(int i=0; i<size; i++)
	{
		emp[i].DisplayRecords();
			
	}
	
	
	
	
	 
	return 0;	
}	

void sort(Employee emp[], int size)
{
Employee temp;
	for(int i=0; i<=size-1; i++)
	{
		for(int j=i+1; j<=size-1; j++)
		{
			if(emp[i].sal>emp[j].sal)
			{	
				temp=emp[i];
				emp[i]=emp[j];
				emp[j]= temp;
			}
		}
	}
}	
