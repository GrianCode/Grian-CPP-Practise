#include<iostream>
using namespace std;
int main(){
	int num=0,max=0,x=0,ttn=0;
	cin>>max>>x;
	for(int i=1;i<=max;i++){
		ttn=i;
		while(ttn>0){
			if(ttn%10 == x)
				num++;
			ttn/=10;
		} 
	}
	cout<<num;
	return 0;
}  
