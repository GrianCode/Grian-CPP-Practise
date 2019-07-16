/*
	Name: 3.7
	Author: Grian
	Date: 16/07/19 20:02
*/
#include<iostream>
using namespace std;
int main(){
	int money=0;
	int a=0,b=0,c=0;
	string ao="ÀæÊ÷£º",bo="ÌÒÊ÷£º",co="Æ»¹ûÊ÷£º",o="¿Ã";
		cin>>money;
		if(money<100000) {
			a=money/500;
			cout<<ao<<a<<o;	
		}
		else {
			a=money*0.3/500;
			b=money*0.5/600;
			c=money*0.2/800;
			cout<<ao<<a<<o<<endl  <<bo<<b<<o<<endl  <<co<<c<<o; 
	    }
	return 0;
}

