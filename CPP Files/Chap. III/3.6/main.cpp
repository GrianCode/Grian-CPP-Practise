#include<iostream>
#include"C:\G-INCLUDE\normal.h"
using namespace std;
int main()
 {
 	
	int many,a,b;
	cin>>many;
	a=many/8;
	b=(many-a)*3;
	string out="商城";
	loadPE();
	
	if((many*3*0.88)>b)
	{
		cout<<"大洋"<<out;
	}
	else
	{
		cout<<"百汇"<<out;
	}
	return 0;
}

