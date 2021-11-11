#include<iostream>
using namespace std;

class Base
{
	int data1;//cannot be inherited
	public:
		int data2;
		void setdata();
		int getdata1();
		int getdata2();
		
};
void Base :: setdata(void)
{
	data1=10;
	data2=20;
}
int Base ::getdata1()
{
	return data1;
}
int Base ::getdata2()
{
	return data2;
}

class Derived : private Base
{
	int data3;
	
	public:
		void process();
		void display();
		
};

void Derived::process()
{
	setdata();
	data3=data2 * getdata1();
	
	int a=getdata1();
	int c=getdata2();
	cout<<" a = "<<a<<" c = "<<c<<endl;
}
void Derived::display()
{
	cout<<"value of dta 1 ="<<getdata1()<<endl;
	cout<<"value of dta 2 ="<<data2<<endl;
	cout<<"value of dta 3 ="<<data3<<endl;
}

int main()
{
	Derived der;
	
	der.process();
	der.display();
	
	return 0;
}
