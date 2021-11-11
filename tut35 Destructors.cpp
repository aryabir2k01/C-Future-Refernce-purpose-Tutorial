#include<iostream>
using namespace std;
//destructor  never takes an argument  nor does
//return any value
//run by compiler implicitly
int count=0;
class num{
	
	public:
		num(){
			count++;
			cout<<"this is the time when constrtutor is called "<<count<<endl;
		}
		~num(){
			
			cout<<"this is the time when destrutor is called "<<count<<endl;
			count--;
		}
};

int main()
{
	cout<<"we are inside main function "<<endl;
 	num n1;
 	{
 		cout<<"enter ythis block"<<endl;
 		cout<<"creating two more objjects"<<endl;
 		num n2,n3;
 		cout<<"exit this block"<<endl;
 		
	}
	cout<<"back to main"<<endl;
	
	 return 0;
}
