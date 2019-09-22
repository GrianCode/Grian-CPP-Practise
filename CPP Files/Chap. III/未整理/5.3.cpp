#include<iostream>
using namespace std;
int main(){
	int apple[10];
	int h=0;
	for(int i=0;i<10;i++){
		cin>>apple[i];
	}
	cin>>h;
	h+=30;
	int n=0;
	for(int j=0;j<10;j++){
		if(h>=apple[j]){
			n++;
		}
	}
	cout<<n;
	return 0;
}
