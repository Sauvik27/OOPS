#include <bits/stdc++.h>
#include<string>
using namespace std;

class binary
{
	string s;
	void check_binary();
public:
	void input();
	void ones_complement();
	void display();
};

void binary :: input()
{
	cout<<"Enter the binary digit\n";
	cin>>s;
	check_binary();
}
void binary :: check_binary()
{
	int m=s.length();
	for(int i=0;i<m;i++)
	{
		if(s.at(i)!='0' && s.at(i)!='1')
		{
			cout<<"Not a binary digit\n";
			exit(0);
		}
	}
}
void binary :: ones_complement()
{
	int m=s.length();
	for(int i=0;i < m;i++)
	{
		if(s.at(i)=='0')
		{
			s.at(i)='1';
		}
		else
		{
			s.at(i)='0';
		}
	}
}
void binary :: display()
{
	int m=s.length();
	cout<<"Displaying the 1's complement\n";
	for(int i=0;i<m;i++)
	{
		cout<<s.at(i);
	}
}

int main()
{
	binary b;
	b.input();
	b.ones_complement();
	b.display();
} 