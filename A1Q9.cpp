#include <iostream>
using namespace std;
int febonacci(int);
int main()
{
	int num;
	cout<<" Enter a number "<<endl;
	cin>>num;
	cout<<"Febonacci series is: "<<endl;
	for(int i=0; i<num; i++)
	{
		cout<<febonacci(i)<<" ";
	}
	cout<<endl;
	return 0;
}

int febonacci(int num)
{
	if(num==0)
		return 0;
	if(num==1)
		return 1;
	else return febonacci(num-1) + febonacci(num-2);
}
