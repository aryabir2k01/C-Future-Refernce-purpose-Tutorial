/*for a protected member 
                             Public-derivation    Private-derivation    Protected-derivation   
   1. Private members:       Not                  Not                   Not                    
   2. Protected members:     Protected            Private               Protected                                     
   3. Public members:        Public               Private               Protected       */                          


/*
   
*/

#include<iostream>
using namespace std;
int main()
{
	//basic example
	int a = 4;
	int *ptr=&a;
	
     cout<<"the value of a is "<<*(ptr)//eta kahisan dereference ptr;
     
	return 0;
}
