#include<stdlib.h>
#include<iostream>
#include<string>
using namespace std;
string a;
int main()
{
	cout<<"Welcome to DEATH NOTE!"<<endl;
	cout<<"Who do you want to kill?"<<endl;
	cout<<"Name:";
	cin>>a;
	cout<<"Are you sure?";
	cin>>a;
	if(a=="NO")
	{
		cout<<"You are kind!";
		return 0;
	}
	cout<<"Are you really sure?";
	cin>>a;
	if(a=="NO")
	{
		cout<<"You are kind!";
		return 0;
	}
	cout<<"Are you really really sure?";
	cin>>a;
	if(a=="NO")
	{
		cout<<"You are kind!";
		return 0;
	}
	cout<<"You are rickrolled!";
	system("start https://www.bilibili.com/video/BV1GJ411x7h7/?spm_id_from=333.337.search-card.all.click&vd_source=375d7bd9134404b2b1ade28b09a56067");
	return 0;
}
 
