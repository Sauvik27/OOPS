//Static variable is also called class variable.
//Static function can only access static data variables.
#include <iostream>
using namespace std;

class Employee
{
	int id;
	static int count;  //so this count will be shared by every object.
public:
	void setdata()
	{
		cout<<"Enter id\n";
		cin>>id;
		count++;
	}
	void getdata()
	{
		cout<<"ID is "<<id<<"\n";
		cout<<"Employee number "<<count<<"\n";
	}
	static void getCount()
	{
		cout<<"The value of count is "<<count<<"\n";
	}
};
int Employee :: count;   //Static data variable, default value is 0.
//if we want to start the count from a value, example 1000, Then
/*
int Employee :: count=1000; //we use this to start count from 1000 
*/
int main()
{
	Employee abc, xyz, qwe;
	abc.setdata();
	abc.getdata();

	Employee :: getCount();

	xyz.setdata();
	xyz.getdata();

	Employee :: getCount();

	qwe.setdata();
	qwe.getdata();

	Employee :: getCount();
}