#include<iostream>
//#include<cstdlib>
using namespace std;
void output(int &n) 
{
	
	if(n%2==0) cout<<n<<"��ż��!";
	else  cout<<n<<"������!";
}
int main()
{
	//if else��ϰ(��ż�ж�)
	int n;
	cin>>n;
	output(n);
	return 0; 
}
