#include<iostream>
using namespace std;

class Complex{
	int a,b;
	
	public:
	Complex();
	Complex(int ,int );//constructor declaration
	void printnumber()
	{
		cout<<"\nvalue is "<<a<<" + i"<<b;
	}
	
};


Complex ::Complex(void)//default constructor as it takes no parameters
{
    a=10;
    b=0;
}

Complex ::Complex(int x ,int y)//parametrized constructor
{
    a=x;
    b=y;
}

int main()
{
	//implicit call
	Complex c(4,6);
	
	//explicit call
	Complex b=Complex(5,7);
	
	c.printnumber();
	b.printnumber();
	return 0;
}
