#include<iostream>
using namespace std;
int main()
{
        int x0 = 3, y0 = 60, x, i = 2, k = 0;
        cin >> x0 >> y0; //输入x0，y0 
        if (y0 % x0 != 0) {  // % 求y0/x0的余数 如果除不尽 程序退出 
            cout << 0;  //输出0 
            return 0;//程序退出 
        }                             
        x = y0 / x0;
        while (x != 1)//当x不等于1时循环括号里的 
        {
            while (x % i != 0)//当x除以i的余数不等于0时循环括号里的
				i++; //i+1 
			k++;//k+1
            while (x % i == 0)//当x除以i的余数不等于0时循环括号里的
				x /= i;//x=x/i
        }
        cout << k * 2;//输出k*2 
        return 0;//程序退出 
}
