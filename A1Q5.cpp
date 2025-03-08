#include <iostream>
using namespace std;
int main()
{
	int num, sum=0;
	cout<< "Enter the number= ";
	cin>>num;
	cout<<"num = "<<num<<endl;
	
	while(num>0)
	{
		sum= num%10 + sum;
		num = num/10;
	}
	cout<<"Sum of all digits is "<<sum<<endl;
	return 0;
}
