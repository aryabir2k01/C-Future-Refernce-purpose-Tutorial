// function call itself
//some scenario recursion is helpful


#include<iostream>
using namespace std;

int factorial(int n)
{
	if(n<=1)
	return 1;
	else
	return n * factorial(n-1);
}
int main()
{
	//factorial of a number
	//factorial of 1!=1
	//factorial of 0!=1
	//n!= n * (n-1)!
	int a;
	cin>>a;
	cout<<factorial(a);
	
	return 0;
}
