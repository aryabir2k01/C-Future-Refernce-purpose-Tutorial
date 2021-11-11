// memory allocation for common object is same ,member function have common memory
// common == f1 ,f2,f3,f4          separate re object ra sabu like o1.a ,o1.b;
//


#include<iostream>
using namespace std;
class Shop
{
	int itemId[100];
	int itemPrice[100];
	
	int counter;
	public:
		void initCounter(void){counter =0 ;}
		void setPrice(void);
		void displayPrice(void);
};
void Shop :: setPrice(void)
{
	cout<<"enter id of your item"<<endl;
	cin>>itemId[counter];
	cout<<"enter price of your item"<<endl;
	cin>>itemPrice[counter];
	counter++;
}
void Shop :: displayPrice(void)
{
	for(int i=0 ; i<counter ; i++)
	cout<<" ID "<<itemId[i]<<" price "<<itemPrice[i]<<endl;
}

int main()
{
	Shop dukan;
	dukan.initCounter();
dukan.setPrice();
	dukan.setPrice();
	dukan.displayPrice();
	return 0;
}
