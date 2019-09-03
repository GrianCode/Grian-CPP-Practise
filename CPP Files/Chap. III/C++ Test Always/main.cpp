#include<iostream>
using namespace std;
int main() {
	int x0 = 3, y0 = 60, p = 0, q = 0;
	int a = 0, b = 0, c = 0;
	int ecx = 0;
	for (p = x0; p <= y0; p+=x0) {
		if (y0 % p == 0) {
			for (q = x0; q <= y0; q+=x0) {
				a = p;
				b = q;
				if (b > a) {
					swap(a, b);
				}
				if (y0 % q == 0 && p * q > y0) {     //最大公因数
					for (c = b; c >= 1; c--) {
						if (a % c == 0 && b % c == 0) {
							break;
						}
					}
				int j = 0;
				int a = 0, b = 0;
				a = p;
				b = q;
				while (a % b != 0 && b != 0) {
					int c = a % b;
					a = b;
					b = c;
				}
				int lcm = p * q / b;
				if (c == x0 && lcm==y0) {
					//cout<<p<<" "<<q<<endl;
					ecx++;
				}
				}
			}
		}
	}
	cout <<ecx;
	return 0;
}