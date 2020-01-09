//5.4
#include<iostream>
using namespace std;
int main(){
	int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int year=0,mouth=0,day=0;
	int c=0;
	cin>>year>>mouth>>day;
	for(int i=1;i<mouth;i++){
		c+=m[i];
	}
	c+=day;
	cout<<day; 
	return 0;
}
