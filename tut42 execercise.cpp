/*for a protected member 
                             Public-derivation    Private-derivation    Protected-derivation   
   1. Private members:       Not                  Not                   Not                    
   2. Protected members:     Protected            Private               Protected                                     
   3. Public members:        Public               Private               Protected                                 

    QUESTION
    
    create 2 class
   
    1 simple calculator  takes input of two numbers using utility function and performs + ,- ,* /
    2 scientific calculator takes input of two numbers using utility function and performs 4 scientific operation of your choice
    
    create another class hybrid calculator and inherit both above
    
	1.what type of inheritance you use?
    2.which mode of inheritnce you use?
    3.create a object of hybrid calculator and display result of simple and sceientific calculator
     
    4.how is code reusability used? 

*/
/*
1.what type of inheritance you use?
   Multiple Inheritance.
2.which mode of inheritnce you use?
   public mode.
3.How is code reusability used?   
   if we create multiple objects for hybrid_calc class we dont have to repeat calculation for each which is solved by inhieriting both class
*/   
#include<iostream>
#include<math.h>
using namespace std;

class Simple_calc
{
	protected:
		double a ,b;
	public :
	    void set_vale(double ,double);
		void dis_simple_calc()
		{
			cout<<"addition of two numbers is "<<a+b<<endl;
	        cout<<"subtraction of two numbers is "<<a-b<<endl;
	        cout<<"multiplication of two numbers is "<<a*b<<endl;
	        cout<<"division of two numbers is "<<a/b<<endl;
		}	
};
void Simple_calc ::set_vale(double m ,double n)
{
	a=m;
	b=n;	
}

class  Scientific_calc
{
	protected:
		double v;
	public :
	    void set_val(double val)
		{
			v=val;			
		}
		void dis_scientific_calc()
		{
			cout<<"sin("<<v<<") is = "<<sin(v)<<endl;
	        cout<<"cos("<<v<<") is = "<<cos(v)<<endl;
	        cout<<"tan("<<v<<") is = "<<tan(v)<<endl;
	        
		}
			
};
 
 
class  Hybrid_calc:public Simple_calc , public Scientific_calc
{
	public:
		void show()
		{
			dis_simple_calc();
			dis_scientific_calc();
		}
};

int main()
{
	Hybrid_calc h;
	h.set_vale(12.4 ,24.4);
	h.set_val(43.2);
	h.show();
	return 0;
}






















































