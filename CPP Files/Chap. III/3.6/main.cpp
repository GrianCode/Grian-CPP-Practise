#include<iostream>
#include"C:\G-INCLUDE\normal.h"
using namespace std;
int main()
 {
 	
	int many,a,b;
	cin>>many;
	a=many/8;
	b=(many-a)*3;
	string out="�̳�";
	loadPE();
	
	if((many*3*0.88)>b)
	{
		cout<<"����"<<out;
	}
	else
	{
		cout<<"�ٻ�"<<out;
	}
	return 0;
}

