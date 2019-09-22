#include<iostream>
using namespace std;
int main(){
	int a[10]={5,4,8,56,72,89,47,12,56,47};
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(j==i){
				break;
			}
			if(a[i]<a[j]){
				swap(a[i],a[j]);
			}
		}
	}
	for(int i=0;i<10;i++){
		cout<<a[i]<<" ";
	}
	return 0;
} 
