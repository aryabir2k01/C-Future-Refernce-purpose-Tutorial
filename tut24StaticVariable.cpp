#include<iostream>
using namespace std;
class Employee
{
	int id;

	static int count;
	
	public:
		void setData(void)
		{
			cout<<"\nenter id \n";
			cin>>id;
			count++;
		}
		void getData(void)
		{
			cout<<"\nid is ";
			cout<<id<<"count of wmployee " <<count;
		}
		static void getCount(void)
		{
			cout<<"\nThe value of count is "<<count<<endl;
		}
};

int Employee :: count;//static variables bhitre nai jue inside class
//dafault value of static variable is 0
int main()
{
	Employee harry,rohan,lavish;
//	harry.id=1   you cannot do this as private data members
//	harry.count=12
//count is static data member of class employee shared by every object
//static function re bs static members hee acess heba not id
//
     harry.setData();
     harry.getData();
     Employee::getCount();//static function enta heba
	 //static function call hela w/o object
	 rohan.setData();
     rohan.getData();
	Employee::getCount();
	
	 lavish.setData();
     lavish.getData();
	 Employee::getCount();
	return 0;
}
