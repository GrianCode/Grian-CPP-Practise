//P8 E(1)
#include<iostream>
using namespace std;
int main()
{
	 system ("title P8 E(1) by:Grian");
	 system ("mode con cols=36 lines=3") ;
	 float speed=0,day=0,many=0,out=0;
	 speed=90/3/3;
	 
	 cout<<"����������������:";
	 cin>>many;
	 cout<<"����������:";
	 cin>>day;
	 system("cls");
	 out=speed*many*day;
	 cout<<"������"<<many<<"̨������"<<day<<"�����"<<out<<"����"<<endl;
	 system ("pause");
	 return 0;
}
