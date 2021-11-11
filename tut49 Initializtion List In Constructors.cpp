/*for a protected member 
                             Public-derivation    Private-derivation    Protected-derivation   
   1. Private members:       Not                  Not                   Not                    
   2. Protected members:     Protected            Private               Protected                                     
   3. Public members:        Public               Private               Protected       */                          

/*
   Initialization List
   
   * syntax  for initializtion list in construtor:
   construtor(argument-list):initializtiomm-section
   {
         assignment+other code;
   }
   
   
   class Test{
     int a;
     int b;
     public:
           Test(int i ,int j):a(i),b(j)
           {
		   }
	};
*/

#include<iostream>
using namespace std;

class Test{
     int a;
     int b;
     public:
     	Test(){//eta lekhli bcz change kali explicit construtor in body 
		 }
//           Test(int i ,int j):a(i),b(j)
//           Test(int i ,int j):a(i),b(i+j)
//           Test(int i ,int j):a(i),b(2*j)
//           Test(int i ,int j):a(i),b(a+j)//special scene possible
//           Test(int i ,int j):b(j),a(i+b) //eta error throe karba bcz a pahela declare haeche then b
           Test(int i ,int j):a(i),b(a+j)
		   {
		   	
		   	//  b=j  enta bhi heba body re initialize
           	cout<<"construtor executrd\nval a "<<a<<"\nval b "<<b<<endl;
           	
           	
		   }
	};
int main()
{
	Test t;
	t=Test(10,21);
	return 0;
}
