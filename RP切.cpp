#include <iostream>
#include<stdlib.h>
#include<time.h>
#include<string>
using namespace std;
int rp1,rp2,lk1,lk2,xingyunnushen;
char p1name[8888],p2name[8888];
string a;
int main()
{
    srand(time(NULL));
    cout<<"���������1���ǳ�";
    cin>>p1name;
    cout<<"���������2���ǳ�";
    cin>>p2name;
    rp1=rand()%20000+30000;
    rp2=rand()%20000+30000;
    while(1)
    {
        cout<<p1name<<"��rpֵΪ"<<rp1<<endl;
        cout<<p2name<<"��rpֵΪ"<<rp2<<endl;
        cout<<"������"<<p1name<<"������ֵ"<<endl;
        cin>>lk1;
        xingyunnushen=rand()%10;
        if(xingyunnushen<=2)
        {
            lk1=(rand()*100+lk1)*100%3001+12888;
        }
        else
        {
            lk1=(rand()*100+lk1)*100%3001+2678;
        }
        cout<<"RP�У���"<<p2name<<"�����"<<lk1<<"���˺���"<<endl;
        rp2-=lk1;
        if(rp2<=0)
        {
            cout<<p1name<<"ʤ������Ϊ���µ�RP֮����"<<endl;
            break;
        }
        cout<<"������"<<p2name<<"������ֵ"<<endl;
        cin>>lk2;
        if(xingyunnushen<=2)
        {
            lk1=(rand()*100+lk1)*100%3001+10000;
        }
        else
        {
            lk1=(rand()*100+lk1)*100%3001+2678;
        }
        cout<<"RP�У���"<<p1name<<"�����"<<lk2<<"���˺���"<<endl;
        rp1-=lk2;
        if(rp1<=0)
        {
            cout<<p2name<<"ʤ������Ϊ���µ�RP֮����"<<endl;
            break;
        }
    }
    cout<<"�밴�������enter������Ϸ";
    cin>>a;
    return 0;
 }
