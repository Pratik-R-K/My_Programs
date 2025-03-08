
#include<iostream>
using namespace std;

int main()
{
	int num1, num2, temp=0;
	cout<<"Enter two numbers: ";
	cin>>num1>>num2;
        cout<<"num1= "<<num1<<endl<<"num2= "<<num2<<endl;

	temp= num1;
	num1 = num2;
	num2 = temp;
        cout<<"num1= "<<num1<<endl<<"num2= "<<num2<<endl;

	return 0;
}

