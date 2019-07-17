#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int in=0,a=0,b=0,c=0,d=0,o=0;
	cin>>in; 
	a=in/100;
	b=in%100/10;
	c=in%100%10;
	o=pow(a,3)+pow(b,3)+pow(c,3);
	if(o==in)
		{
		cout<<"水仙花数:-)";
		}
	else
	    {
		cout<<"不是:-("; 
	    }
	return 0;
}


