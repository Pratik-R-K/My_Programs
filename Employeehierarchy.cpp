#include <iostream>
#include <string>
using namespace std;

class Employee
{
	public:
	
	string empid;
	string name;
	double sal;
	
	public:
	Employee()
	{
	}
		
	Employee(string empid, string name, double sal)
	{
		this->empid = empid;	
		this->name= name;
		this->sal =sal;
	}

	virtual void CalcSalary()=0;

};

class PermEmployee : public Employee  
{
	public:
	double bonus;
	int month;
	
	
	public:
	PermEmployee()
	{
	}
		
	PermEmployee(string empid, string name, double sal,double bonus, int month) :  	Employee(empid, name, sal)
	{
		this->bonus = bonus;
		this->month = month;
	}

	void CalcSalary ()
	{
		double Totalsal= bonus + (sal*month);
		cout<<Totalsal<<endl;
	}
	
	/*void Display()
	{
		cout<<"Permanant Salary : "<<Totalsal<<endl;
	}*/	
};	

class ContractEmployee : public Employee 
{
	public:
	int bonus;
	int noHrs;
	int days;

	public:
	ContractEmployee()
	{

	}

	ContractEmployee(string empid, string name, double sal, double bonus, int noHrs) : Employee(empid, name, sal)
	{
		this->bonus= bonus;
		this->noHrs=noHrs;
		this->days= days;
	}

	void CalcSalary ()
	{
		double Totalsal = (sal*noHrs)+bonus ;
		cout<<Totalsal<<endl;
	}
};	

int main()
{

	PermEmployee pe("001","Pratik",25000.00,5000.00,12);
	Employee* e = nullptr;
	e = &pe;
	e->CalcSalary();
	//e->Display();
	
	ContractEmployee ce("002","sagar",1500.00,2000.00,20);
	e=nullptr;
	e= &ce;
	e->CalcSalary();
	//pe.Display();
//	PermEmployee emp(10000, 6);
	return 0;
}
