#include<iostream>
using namespace std;

class Simple{
	int data1,data2;
	public:
		Simple(int a ,int b=9)// note that always default value in consstrutor defination is to be kept in right position
		{
			data1=a;
			data2=b;
		}
		void printdata();
	
		
};
void Simple::printdata()
{	
	cout<<"value of data is "<<data1<<" and "<<data2<<endl;	
}

int main()
{
	Simple s(1);//Simple s(1,90); eta kale b ra value will change from its default value
	s.printdata();
	return 0;
}
