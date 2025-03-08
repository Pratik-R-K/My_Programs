#include <iostream>

using namespace std;

int sod(int); 
int main()
{
	int num, sum=0;
	cout<< "Enter the number= ";
	cin>>num;
	cout<<"num = "<<num<<endl;
	
	sum = sod(num);
	
	cout<<"Sum of all digits is "<<sum<<endl;
	return 0;
}
int sod(int n)
{
	n= n/10;
	int result = 0; 
	result = n%10 + sod(n);
	return result;	
}
