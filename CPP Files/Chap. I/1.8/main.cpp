#include<iostream>
#include<iomanip> 
#include<windows.h>
using namespace std;
int main()
{
	system ("title P10 EG(1.8) by:Grian");
	system ("mode con cols=98 lines=10") ;
	float a=0,b=0;
	a=10.0;
	b=6.0 ;
	cout<<"������Ϊ����fixed<<setprecision(public _Setprecision setprecision (int _n))��ʽ������ʹ��"<<endl;
	Sleep (1000) ;
	cout<<"����"<<a<<"/"<<b<<"="<<a/b<<endl;
	Sleep (1000) ;
	cout<<"������ʹ��fixed<<setprecision(public _Setprecision setprecision (int _n))��ʽ��������ʮλС����"<<endl;
	cout<<"����"<<fixed<<setprecision(10)<<a<<"/"<<b<<"="<<a/b<<endl;
	Sleep (2000) ;
	system("pause");
	
} 
