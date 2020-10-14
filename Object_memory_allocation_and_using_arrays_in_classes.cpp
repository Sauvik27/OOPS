#include <iostream>
using namespace std;

class shop
{
	int itemId[100];  //100 items in shop
	int itemPrice[100];
	int counter;
public:
	void initcounter()
	{
		counter=0;
	}
	void setprice();
	void displayprice();
};

void shop :: setprice()
{
	cout<<"Enter item ID of your item number "<<counter+1<<"\n";
	cin>>itemId[counter];
	cout<<"Enter item price\n";
	cin>>itemPrice[counter];
	counter++;
}
void shop :: displayprice()
{
	for(int i=0;i<counter;i++)
	{
		cout<<"The Price of item with ID "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
	}
}

int main()
{
	int n=0;
	cout<<"Enter the number of items to input --> ";
	cin>>n;
	shop dukaan;
	dukaan.initcounter();
	for(int i=0;i<n;i++)
	{
		dukaan.setprice();
	}
	dukaan.displayprice();
}