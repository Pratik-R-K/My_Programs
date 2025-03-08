#include <iostream>
using namespace std;

int add(int,int);
int main()
{
 int num1= 10, num2=20, r1, r2, r3;
 bool num3=50, num4=-2;
 cout<<"num3= "<<num3<<endl<<"num4= "<<num4<<endl;
 char num5='a', num6='A';
 r1= add(num1, num2);
 cout<<"Addition of two Intergers is "<<r1<<endl;
 r2= add(num3, num4);
 cout<<"Addition of two Booleans is "<<r2<<endl;
 r3= add(num5, num6);
cout<<"Addition of two Characters is "<<r3<<endl;
}

int add(int n1, int n2)
{
	
	int res;
	res = n1+n2;
	return res;
}

 

