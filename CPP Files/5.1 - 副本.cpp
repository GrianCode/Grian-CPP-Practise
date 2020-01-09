#include<iostream>
#include<cstring> 
using namespace std;
int main(){
	int a[10001],c=0;
	//memset(a,0,sizeof(a));
	cin>>c;
	for(int i=1;i<=c;i++){
		cin>>a[i];
	}
	for(int j=c;j>0;j++){
		cout<<a[j];
	}
	return 0;
}
