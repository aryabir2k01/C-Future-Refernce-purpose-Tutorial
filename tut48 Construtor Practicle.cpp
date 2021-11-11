/*for a protected member 
                             Public-derivation    Private-derivation    Protected-derivation   
   1. Private members:       Not                  Not                   Not                    
   2. Protected members:     Protected            Private               Protected                                     
   3. Public members:        Public               Private               Protected       */                          
/*
  Case 1 = order of exection A then B
  class B:public A{
  };
  
  Case 2 = order of exection B then C then A
  class A :public B ,public C{
  };
  
  Case3 = order of exection  C then B then A 
  class A :public B ,virtual public C{
  };
  
*/

#include<iostream>
using  namespace std;

class Base1{
	int data1;
	public:
		Base1(int i)
		{
			data1=i;
			cout<<"Base class construtor called"<<endl;
		}
		void print_data1()
		{
			cout<<"the value of data "<<data1<<endl;
		}
};
class Base2{
	int data2;
	public:
		Base2(int i)
		{
			data2=i;
			cout<<"Base class construtor called"<<endl;
		}
		void print_data2()
		{
			cout<<"the value of data "<<data2<<endl;
		}
};
class Derived:public Base1 , public Base2{
	int derived1 ,derived2;
	public:
		Derived(int a ,int b, int c ,int d):Base1(a),Base2(b)   //syntax 
		{
			derived1 =c;
			derived2 =d;
			cout<<"Derived class construtor called "<<endl;
		}
		void print()
		{
			cout<<"Derived 1 value "<<derived1
			<<endl<<"Derived 2 value "<<derived2<<endl;
		}
		
};

int main()
{
	Derived d(20,90,12,34);
	d.print_data1();
	d.print_data2();
	d.print();
	return 0;
}
