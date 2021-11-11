//why class over structure ?  data hiding and function inside class
#include<iostream>
using namespace std;



class Employee
{
    private://only class function cann acess the members
	   int a,b,c;
	public :
	   int d,e;
	   void setData(int a1,int b1,int c1);
	   void getdata()
	   {
	       cout<<a<<endl;
	       cout<<b<<endl;
	       cout<<c<<endl;
	       cout<<d<<endl;
	       cout<<e<<endl;
	   
	   }   	
};
void Employee::setData(int a1 ,int b1 ,int c1)// declare function outside class
{
	a=a1;
	b=b1;
	c=c1;
}
 int main()
 {
 	Employee harry;
// 	harry.a=129; this will throw error as  a is private member
 	harry.d=10;
 	harry.e=12;
	harry.setData(2,3,4);
	harry.getdata();
 	return 0;
 }
