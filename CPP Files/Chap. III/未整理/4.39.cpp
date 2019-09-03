#include<iostream>
using namespace std;
int main(){
	int i = 0, n = 10, c = 0;
	cin >> n;
	for (i = 1; i < n; i++) {
		for (c = 1; c < n - i; c++) {
			cout << " ";
		}
		for (c = 1; c <= 2 * i - 1; c++) {
			cout << "*";
		}
		cout << endl;
	}
	return 666;
}
