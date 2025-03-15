#include <iostream>
using namespace std;

template <typename T>
void Swap(T &x, T &y)
{
	T temp = x;
	x = y;
	y = temp;
}

template <typename T>
T add(T a, T b)
{
	return a+b;
}

template <typename T>
T subtract(T a, T b)
{
	return b-a;
}

template <typename T>
T multiply(T a, T b)
{
	return a*b;
}

template <typename T>
T divide(T x, T y)
{
	if(y==0)
	{
		return 0;
	} 
	else
	{
		return x/y;
	}	
}

int main()
{
	int x= 20;
	int y= 10;

	
	//cout<<"Before swaping: x= "<<x<<"y= "<<y<<endl<<Swap(x,y)<<"After swapping : x = "<<x<<"y = "<<y<<endl;
	
	cout<<"Addition : "<<add(x,y)<<endl;
	cout<<"Subtraction : "<<subtract(x,y)<<endl;
	cout<<"Multiply : "<<multiply(x,y)<<endl;
	cout<<"Division : "<<divide(x,y)<<endl;
	Swap(x,y);
	cout<<x<<" "<<y<<endl;

}	
		

