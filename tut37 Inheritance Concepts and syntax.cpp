#include<iostream>
using namespace std;

//Base class
class Employee{
	
	
	public:
		int id;
		float salary;
		Employee(){}//why create this bcz when u create derived class it automatically calls constructor of base class
		Employee(int inpId){
			id=inpId;
			salary=34;
		}
};

//derived class syntax
//class derived-class-name : visibilty-mode base-class-name
//

/*
    Note
    default visiblity mode is private
    
 	Private:Public members become private of derived
    Public:Public members become public of derived
	private members cannot be derived
		
    
*/
class  Programmer : private Employee
{
	public:
	int languagecode=9;
	
	Programmer(int inpId)
	{
		id=inpId;
	}
	void getData()
	{
		cout<<id;
	}
	
};


int main()
{
	Employee harry(1) ,rohan(2);
	cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
	Programmer skillF(10);
	cout<<skillF.languagecode<<endl;
	skillF.getData();	
	return 0;
}
