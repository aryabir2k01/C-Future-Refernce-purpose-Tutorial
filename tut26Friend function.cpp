//friend function
//   propertiess of friend funnction
//   1- not in  the scope of class 
//   2- since it is not int the scope of class it cannot be called by object of class
//   3- can be invoked w/o help of any object
//   4- usually contains the objects as argumentgs
//   5- can be declared inside public and private section of class
//   6 - it cannot acess the members directly by their names and needss object to acess


#include<iostream>
using namespace std;

class Complex
{
	int a,b;
	
	public:
		void setNumber(int m ,int  n)
		{
			a=m;
			b=n;
		}
		void printNumber()
		{
			cout<<"your number is "<<a<<" + "<<b<<"i\n";
		}
		//below line means sumComplex is friend and it can use private members
		friend Complex sumComplex(Complex ,Complex);
};

Complex sumComplex(Complex o1 ,Complex o2)
{
	Complex o3;
	o3.setNumber(o1.a+o2.a  , o1.b+o2.b);
	return o3;
}

int main()
{
	Complex c1,c2,sum;
	c1.setNumber(1,4);
	c2.setNumber(5,8);
//	c1.sumComplex not right bcz  not a member function
	c1.printNumber();
	c2.printNumber();
	
	sum=sumComplex(c1,c2);
	sum.printNumber();
	return 0;
}
