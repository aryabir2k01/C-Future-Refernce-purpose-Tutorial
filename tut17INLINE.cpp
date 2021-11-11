//inline function  
//compiler exchanges function call with function code in compile time
//problem if used everytime it will occupy memory
//use for small function
//not use for recursion , static variables ,loop ,switch 
//inline is request to compiler 

// int product(int a ,int b)
// {
//   static int c=0;//one time execute 
//   c=c+1;// everytime c value is saved and c values will be as 1 2 3 4  ...
//	 return a*b;
// }

//default arguments always keep right after  

//int strlen(const char *p)
//{ //string length aau string nai hue change
//}
#include<iostream>
using namespace std;

inline int product(int a ,int b)
{
	return a*b;
}

float moneyReceived(int currentmoney , float factor=1.04)
{
	return currentmoney*factor;
}

int main()
{
	int a,b;
	cout<<"enter the value of a and b"<<endl;
	cin>>a>>b;
    cout<<" "<<product(a,b);
    
    int money=100000;
    cout<<"\nif you have Rs"<< money<<" in bank account you will receive "<<moneyReceived(money)<<" after one year"<<endl;
	  cout<<"For VIP : if you have Rs"<< money<<" in bank account you will receive "<<moneyReceived(money,2.1)<<" after one year"<<endl;
	return 0;
}
