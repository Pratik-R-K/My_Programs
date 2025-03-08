#include<iostream>
using namespace std;
int main()
{
	int num1=2, num2=5, result=1;
	for(int i=1; i<=num2; i++)
	{
		result= num1*result;
	}
	cout<<"Result = "<<result<<endl;
	return 0;
}
