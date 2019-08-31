#include<iostream>
using namespace std;
int main() {
	int x0 = 3, y0 = 60, p = 0, q = 0;
	int a = 0, b = 0, c = 0;
	for (p = x0; p <= y0; p++) {
		if (y0 % p == 0) {
			for (q = x0; q <= y0; q++) {
				if (y0 % q == 0 /*&& p*q>=y0*/) {
					a = p;
					b = q;
					c = 0;
					while (a % b != 0) {
						c = a / b;
						a = b;
						b = c;
					} 
					if (c == x0) {
						cout << p << " " << q << endl;
					} 

				}
			}
		}
	}
}
