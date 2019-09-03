#include<iostream>
using namespace std;
int main(){
	int i = 0, n = 10, c = 0;
	int m = 0; 
	cin >> n;
	for (i = 1; i < n; i++) {
		for (c = 1; c < n - i; c++) {
			cout << " ";
		}
		for(m = 1; m <= (2 * i - 1) / 2 + 1; m++){
			cout << m;
					
			for(; m >= 1; m--){
				cout<<m;
			}
		} 
		cout << endl;
	}
	return 666;
}
