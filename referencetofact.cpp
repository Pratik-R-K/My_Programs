#include <iostream>
using namespace std;
int factorial(int);

int main()
{
	int num;
	const int &reference = num;

	cout<<"Enter the number: ";
	cin>>num;

	cout<<"Factorial is : "<<factorial(reference)<<endl;



}

int factorial(int num)
{
	if(num == 1)
	{
		return 1;
	}
	else
	{
		return num*factorial(num -1);
	}
}



