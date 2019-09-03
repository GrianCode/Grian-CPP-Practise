#include<iostream>
using namespace std;
int main(){
	int t1=0,t2=0,total=0,day=0;
	for(int i=1;i<=7;i++){
		cin>>t1>>t2;	
		if(t1+t2 > total){
			total=t1+t2;
			day=i;
		}
	} 	
	if(total>8)
		cout<<day;
	else
		cout<<0;
	return 0;
}  
