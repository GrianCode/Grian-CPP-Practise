#include<iostream>
using namespace std;
int main()
{
        int x0 = 3, y0 = 60, x, i = 2, k = 0;
        cin >> x0 >> y0; //����x0��y0 
        if (y0 % x0 != 0) {  // % ��y0/x0������ ��������� �����˳� 
            cout << 0;  //���0 
            return 0;//�����˳� 
        }                             
        x = y0 / x0;
        while (x != 1)//��x������1ʱѭ��������� 
        {
            while (x % i != 0)//��x����i������������0ʱѭ���������
				i++; //i+1 
			k++;//k+1
            while (x % i == 0)//��x����i������������0ʱѭ���������
				x /= i;//x=x/i
        }
        cout << k * 2;//���k*2 
        return 0;//�����˳� 
}
