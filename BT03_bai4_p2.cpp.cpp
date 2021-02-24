#include<iostream>
using namespace std;

int GiaiThua(int n) {
	if (n == 0 || n == 1)return 1;
	else return n * GiaiThua(n - 1);
}

int ChinhHop(int n, int k) {
	int result=GiaiThua(n)/(GiaiThua(k)*GiaiThua(n-k));
	return  result;
}

int main() {
	int n;
	cin >> n;
	n--;
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << ChinhHop(i, j) <<' ';
		}
		cout << endl;
	}
	return 0;
}