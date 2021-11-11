//construtors
//class is custom data type jenta store karsi

//***************properties***********************
//
/*    
      1.it should be declared in public section of class
      2.They are automatically invoked when object is created
      3.They cannot return values and do not have return types 
      4.It can have default arguments
      5.We cannot refer to their adress 
*/

#include<iostream>
using namespace std;

class Complex{
	int a,b;
	
	public:
	//creating a constructor
	//Constructor is special meber function with same name as class
	//used to initilize objects of class
	//automatically invoked(call karna mane execute) when objects is created
	//no return type
	
	Complex(void);//constructor declaration
	void printnumber()
	{
		cout<<"value is "<<a<<" + i"<<b;
	}
	
};


Complex ::Complex(void)//default constructor as it takes no parameters
{
    a=10;
    b=0;
}
int main()
{
	Complex c;
	c.printnumber();
	
	return 0;
}
