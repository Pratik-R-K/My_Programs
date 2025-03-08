#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float p,n;
	float r;
	double result;
	
	cout<<"Enter values of Principle, No of Years and Rate of Intrest "<<endl;
	cin>>p>>n>>r;
	result = p*pow((1+r/100),n);
	
	cout<<"Compound Interest= "<<result<<endl;
	return 0;
}


