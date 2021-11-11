#include<iostream>
using namespace std;
/*
     private members inherit nai hue
     
*/
class Base{

	protected:
      int a;//chaiyibu inherit haeparbar katha
	
	private:
		int b;//inherit hebar ke nai chahu
		
	public:
	     void use();	
	
};
void Base::use(void)
{
	b= a-2;
	cout<<" b = "<<b;
}
/*for a protected member 
                             Public-derivation    Private-derivation    Protected-derivation   
   1. Private members:       Not                  Not                   Not                    
   2. Protected members:     Protected            Private               Protected                                     
   3. Public members:        Public               Private               Protected                                 
*/
class Derived:private Base{
	
	public:
		void set(int p)
		{
			a=p;
			
		}
		void show();
};
void Derived::show (void)
{
	cout<<" a = "<<a;
}
int main()
{
	Derived d;
	d.set(12);
	d.show();
	Base bc;
	bc.use();
	return 0;
}
