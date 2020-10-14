#include<iostream>
using namespace std;


class Employee
{
	private:
		int a, b, c;
	public:
		int d, e;
		void setdata(int a1,int b1,int c1); //Declaration
		void getdata()
		{
			cout<<"a is "<<a<<endl;
			cout<<"b is "<<b<<endl;
			cout<<"c is "<<c<<endl;
			cout<<"d is "<<d<<endl;
			cout<<"e is "<<e<<endl;
		}
};

void Employee :: setdata(int a1,int b1,int c1)
{
	a=a1;
	b=b1;
	c=c1;
}

int main()
{
	Employee abc;
	abc.d=34;
	abc.e=39;
	abc.setdata(1,2,3);
	abc.getdata();
}