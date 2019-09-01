#include<iostream>
using namespace std;
int main() {
	int x0 = 3, y0 = 60, p = 0, q = 0;
	int a = 0, b = 0, c = 0;
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
				int j;
				bool lcm = false;
				for (j = p; j <= y0; j += j) {		//最小公倍数 
					if (lcm){
						break;
					} 
					for (int k = q; k <= y0; k += k) {
						if (j == k) {
							lcm = false;
							break;
						}
					}
				}
				if (c == x0 && j==y0) {
					cout << p << " " << q << endl;
				}

				}
			}
		}
	}
	return 0;
}
