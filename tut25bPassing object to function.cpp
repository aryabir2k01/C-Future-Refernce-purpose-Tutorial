#include<iostream>
using namespace std;
class complex
{
   int a;
   int b;
   
   public:
        void getData(int m ,int n)
		{
			a=m;
			b=n;
		}
		void addbySum(complex c1 ,complex c2)
		{
			a=c1.a+c2.a;
			b=c1.b+c2.b;
		}
		void print()
		{
			cout<<"sum is "<<a<<" + i"<<b;
		} 
	
};


int main()
{
	complex c1,c2,c3;
	c1.getData(2,4);
	c2.getData(4,9);
	
	c3.addbySum(c1,c2);
	c3.print();
	return 0;
}
