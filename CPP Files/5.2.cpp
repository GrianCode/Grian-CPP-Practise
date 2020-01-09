#include<iostream>
using namespace std;
int main(){
	int a[21];
	a[1]=0;
	a[2]=1;;
	for(int i=3;i<=20;i++){
		a[i]=a[i-1]+a[i-2];
	}
	for(int j=20;j>0;j--){
		cout<<a[j]<<' ';
	}
	return 0;
}
