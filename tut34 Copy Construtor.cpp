//using copy constructor 

#include<iostream>
using namespace std;
 
class Number{
	int a;
	public:
		Number()
		{
			a=0;
		}
		
		Number(int num)
		{
			a=num;
		}
		Number(Number &obj)
		{
			cout<<"copy constructor called"<<endl;
			a=obj.a;
		}
		void display();
	
};
void Number :: display()
{
	cout<<"The number for this object is "<<a<<endl;
}

int main()
{
	//when  no copy constructor is found  compiler will gives its own copy constructor
	
	Number x,y,z(45),z1(x),z2;
	x=Number(12);
	x.display();
	z.display();
	z1=Number(x);
	z1.display();
	
	Number z3=z;//ethire heba  bcz same line re object z3 create hela
	
	z2=z;//e case re copy not called khali name change z2 agru haeche
	//jadi you want  z1 which is exactly same as z
	 
	return 0;
}
