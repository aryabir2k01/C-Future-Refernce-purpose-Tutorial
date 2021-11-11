//Friend class

#include<iostream>
using namespace std;
//Forward declaration

class Complex;

class Calculator
{

	public:
		int add(int a ,int b)
		{
			return(a+b);
		}
		int sumRealComplex(Complex  ,Complex );
		int sumCompComplex(Complex  ,Complex );

};

class Complex
{
	int a,b;
	//individullay declarling function of another class as  friend
//	**************************************

//	friend int Calculator :: sumRealComplex(Complex  ,Complex );
//	friend int Calculator :: sumCompComplex(Complex  ,Complex );

//    ***************************************
    //alter ::  make entire class as friend
	
	friend class Calculator;
	
		
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
		
		
};

int Calculator :: sumRealComplex(Complex o1 ,Complex o2)
		{
		
			return(o1.a+o2.a);
		}
int Calculator :: sumCompComplex(Complex o1 ,Complex o2)
		{
		
			return(o1.b+o2.b);
		}

int main()
{
	Complex o1,o2;
	o1.setNumber(1,4);
	o2.setNumber(3,5);
	Calculator calc;
	int res = calc.sumRealComplex(o1,o2);
	cout<<"\nThe sum and real part of o1 and o2 is "<<res<<endl;
	int res1 = calc.sumCompComplex(o1,o2);
	cout<<"\nThe sum of img part of o1 and o2 is "<<res1<<endl;
	return 0;
}
