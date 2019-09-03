#include<iostream>
using namespace std;
int main() {
	int p=12,q=15,a=0,b=0;
	a=p;
	b=q;
	while(a%b!=0 && b!=0){
		int c=a%b;
		a=b;
		b=c;
	}
	cout<<p*q/b;
	return 0;
}
