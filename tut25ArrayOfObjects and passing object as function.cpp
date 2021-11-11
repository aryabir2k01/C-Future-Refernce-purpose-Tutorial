//array of objects
#include<iostream>
using namespace std;

class Employee
{
	int id;
	int salary;
	public:
		void setId()
		{
			salary=12912;
			cout<<"enter id of employee ";
			cin>>id;
		}
		void getId()
		{
				cout<<"Id of employee is "<<id<<" and salary "<<salary<<endl;
		}
};


int main()
{
//	Employee harry,rohan,lavish,shruti;
//	harry.setId();
//	harry.getId();

    Employee fb[4];
	for(int i=0 ;i<4 ;i++)
	{
		fb[i].setId();
		fb[i].getId();
		
	}	
	
	return 0;
}

