#include<iostream>
#include<math.h>
using namespace std;

class Point{
	int x,y;
	public:
		Point(int a ,int b)
		{
			x=a;
			y=b;
		}
		
		void display()
		{
			cout<<" the point is "<<x<<","<<y<<endl;
			
		}
		
		friend void compute(Point &,Point&);
};

//create a function (using a friend function) that takes 2 points and computes distance btw them

void compute(Point &p ,Point &q)
{
	float distance=sqrt(pow(p.x-q.x,2)+pow(p.y-q.y,2));
	cout<<distance;

	
}

int main()
{
	Point p(1,1);
	p.display();
	
	Point q(4,6);
	q.display();
    compute(p,q);
	
	return 0;
}
