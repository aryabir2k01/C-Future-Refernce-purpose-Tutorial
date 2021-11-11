//member functoion nesting
// C++ initially called C with classes
// C++ is just extension of structures
//structures had limitations
//    --> members are public
//    --> No methods
//class = structures + more
// classes can have method and properties
//classes can make few memebers as private and public
//structures in C++ is typedef
// you can declare objects along with the class declaration

//class A
//  {
//  	//class definatiom
//  },c,v;    valid syntax

//nesting of member function



#include<iostream>
#include<string>
using namespace std;


class binary
{
    string s;
	public:
		void read(void);
		void chk_bin(void);
		void onesComplement(void);
		void display(void);
};
void binary :: read(void)
{
	cout<<"enter binary number ";
	cin>>s;
}
void binary::chk_bin(void)
{
	for(int i=0 ;i<s.length() ;i++)
	{
		if(s.at(i)!='0' && s.at(i)!='1')
		{
			cout<<"incorrect binary format\n";
			exit(0);
		}
	}
}
void binary::onesComplement()
{

	for(int i=0 ;i<s.length() ;i++)
	{
	    
		if(s.at(i)=='0')
		{
			s.at(i)='1';
//			cout<<"error\";
		}
		else
		{
			s.at(i)='0';
		}
	}
}
void binary::display()
{
	for(int i=0 ;i<s.length() ;i++)
	cout<<s.at(i);
 
     cout<<endl;
}
int main()
{
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.onesComplement();
    b.display();
	return 0;
}
