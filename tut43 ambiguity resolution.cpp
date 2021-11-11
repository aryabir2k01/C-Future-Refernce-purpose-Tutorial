/*for a protected member 
                             Public-derivation    Private-derivation    Protected-derivation   
   1. Private members:       Not                  Not                   Not                    
   2. Protected members:     Protected            Private               Protected                                     
   3. Public members:        Public               Private               Protected  
*/
//Ambiguity resolution , when functions are same in class base and derived classes 
#include<iostream>
using namespace std;
class Base1
{
	public:
		void greet()
		{
			cout<<"how are you ? \n";
		}
};
class Base2
{
    	public:
		void greet()
		{
			cout<<"kaise ho ? \n";
		}
};
class Derived: public  Base1 , public Base2
{
	int a;
	public:
		void greet(){
			Base1::greet();// ambiguity resolution
		}
};


class B{
	public:
		void say()
		{
			cout<<"helloew world\n";
		}
};
class D:public B{
	int a;
	// D's new say method will override base class's say() method
	public:
		void say()
		{
			cout<<"helloew baeutiful\n";
		}
};
int main()
{
//	Ambiguity 1
	Base1 obj1;
	Base2 obj2;
	obj1.greet();
	obj2.greet();
	Derived d;
	d.greet();

//	Ambiguity 2
    B b;
	b.say();
	D dw;
	dw.say(); 
	return 0;
}   
