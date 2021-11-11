//more on friend function


#include<iostream>
using namespace std;

//forward declaration
class Y;

class X
{
	int data;
	public:
		void setvlaue(int value)
	    {
		   data=value;
	    }
	    friend void add(X ,Y);
};

class Y
{
	int num;
	public:
		void setvlaue(int value)
	    {
		   num=value;
	    }
	    friend void add(X ,Y);
};


void add(X o1 ,Y o2)
{
	cout<<"summing datas of x and y objects is "<<o1.data+o2.num;
}


int main()
{
	X a;
	a.setvlaue(3);
	
	Y b;
	b.setvlaue(5);
	
	add(a ,b);
	
	return 0;
}
