//P8 E(1)
#include<iostream>
using namespace std;
int main()
{
	 system ("title P8 E(1) by:Grian");
	 system ("mode con cols=36 lines=3") ;
	 float speed=0,day=0,many=0,out=0;
	 speed=90/3/3;
	 
	 cout<<"请输入拖拉机数量:";
	 cin>>many;
	 cout<<"请输入天数:";
	 cin>>day;
	 system("cls");
	 out=speed*many*day;
	 cout<<"经计算"<<many<<"台拖拉机"<<day<<"天耕地"<<out<<"公顷"<<endl;
	 system ("pause");
	 return 0;
}
