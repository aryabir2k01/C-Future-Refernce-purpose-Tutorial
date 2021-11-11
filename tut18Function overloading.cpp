//function overloading

#include<iostream>
using namespace std;

int add(int a, int b)
{
	cout<<"function with two arguments\n";
	return a+b;
}


int add(int a, int b, int c)
{
	cout<<"\nfunction with 3 arguments\n";
	return a+b+c;
}


int main()
{
	cout<<add(3,6,1)<<endl;
	cout<<add(3,6);
	return 0;
}

