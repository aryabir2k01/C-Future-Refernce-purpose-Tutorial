/*for a protected member 
                             Public-derivation    Private-derivation    Protected-derivation   
   1. Private members:       Not                  Not                   Not                    
   2. Protected members:     Protected            Private               Protected                                     
   3. Public members:        Public               Private               Protected                                 
*/

//multiple inheritance
//a->c    b->c

/*
  syntax
  
  class derived : visibilty-mode base1 , visibilty-mode base2
  {
  class body;
};

\*/

#include<iostream>
using namespace std;

class Base1{
	protected:
		int base1int;
	public :
	    void set_base1int(int a)
		{
			base1int = a;
		}	
	
};

class Base2{
	protected:
		int base2int;
	public :
	    void set_base2int(int a)
		{
			base2int = a;
		}	
	
};

class Derived:public Base1 , public Base2
{
	public :
		void show()
		{
			cout<<" val of base 1 is = "<<base1int<<endl;
			cout<<" val of base 2 is = "<<base2int<<endl;
		}
};

int main()
{
	Derived harry;
	harry.set_base1int(23);
	harry.set_base2int(24);
	harry.show();
	return 0;
	
}
