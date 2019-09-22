#include<iostream>
using namespace std;
int main(){
	int i=2,h[11]={0},c=0;
	while(c<=1000){
		for(int j=1;j<=10;j+=i){
			h[j]+=1;
			c++;
		}
		i++;
	}
	for(int k=1;k<=10;k++){
		if(h[k]==0){
			cout<<k<<" "; 
		}
	}
	return 0;
} 
