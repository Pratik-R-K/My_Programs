#include <iostream>
using namespace std;
double area(double, double);
int main()
{
	double len, wid, res;
	cout<<"Enter Length and width"<<endl;
	cin>>len>>wid;
	
	res= area(len, wid);
	cout<<"Area of Rectangle is "<<res<<"sq.cm"<<endl;
	return 0;
}
double area(double len, double wid)
{
	return len*wid;
}
