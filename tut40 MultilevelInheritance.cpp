//a->b->c multilevel inheritance 
/* 
    -----------
   |          |
   |    A     |
   |          |
    -----------
         |
    -----------
   |          |
   |    B     |
   |          |
    -----------
         |
    -----------
   |          |
   |    C     |
   |          |
    -----------
   

* /
#include<iostream>
using namespace std;

/*
class GranF{
	protected :
		fair skin;
		brown eyes;
	public:
	   angry;	
	
};

class Father:public GranF {
	
};

class Child :public Father{
};
*/

/*for a protected member 
                             Public-derivation    Private-derivation    Protected-derivation   
   1. Private members:       Not                  Not                   Not                    
   2. Protected members:     Protected            Private               Protected                                     
   3. Public members:        Public               Private               Protected                                 
*/

class Student{
	protected :
		int roll;
	public:
	void set_roll(int);
	void get_roll(void);	
	
};
void Student::set_roll(int r)
{
	roll=r;
}
void Student::get_roll()
{
	cout<<"The roll is "<<roll<<endl;
}

class Exam:public Student{
	protected:
		float maths,physics;
	public:
	    void set_marks(float ,float);
	    void get_marks();	
	
};
void Exam :: set_marks(float m1 ,float m2)
{
	maths =m1;
	physics =m2;
}
void Exam :: get_marks()
{
	cout<<"maths mark is = "<<maths<<endl<<"physics mark is = "<<physics;
}


class Result:public Exam{
	
	float percentage;
	public:
		void display();
};
void Result::display()
{
	get_roll();
	get_marks();
	cout<<"\nYour per is "<<(maths+physics)/2<<endl;
}
int main()
{
	Result aryabir;
	aryabir.set_roll(2029008);
	aryabir.set_marks(98, 99.0);
	aryabir.display();
	
	return 0;
}
