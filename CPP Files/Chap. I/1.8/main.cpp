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
	cout<<"本程序为测试fixed<<setprecision(public _Setprecision setprecision (int _n))格式函数的使用"<<endl;
	Sleep (1000) ;
	cout<<"例："<<a<<"/"<<b<<"="<<a/b<<endl;
	Sleep (1000) ;
	cout<<"下面再使用fixed<<setprecision(public _Setprecision setprecision (int _n))格式函数保留十位小数："<<endl;
	cout<<"例："<<fixed<<setprecision(10)<<a<<"/"<<b<<"="<<a/b<<endl;
	Sleep (2000) ;
	system("pause");
	
} 
