#include<iostream>
using namespace std;
int main()
 {
 	
	int many,a,b;
	cin>>many;
	a=many/8;
	b=(many-a)*3;
	string out="�̳�";
	
	if((many*3*0.88)>b)
	{
		cout<<"����"<<out;
	}
	else
	{
		cout<<"�ٻ�"<<out;
	}
	return 0;
}

