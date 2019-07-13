#include<iostream>
//#include<cstdlib>
using namespace std;
void output(int &n) 
{
	
	if(n%2==0) cout<<n<<"ÊÇÅ¼Êý!";
	else  cout<<n<<"ÊÇÆæÊý!";
}
int main()
{
	//if elseÁ·Ï°(ÆæÅ¼ÅÐ¶Ï)
	int n;
	cin>>n;
	output(n);
	return 0; 
}
