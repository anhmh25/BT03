#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int n,sum=0;
	cin >> n;
	int a[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	double tbc = 1.0*sum / n;
	sum = 0;
	for (int i = 0; i < n; i++) {
		sum += pow(a[i] - tbc, 2);
	}
	double ps = 1.0 * sum / n;
	cout << tbc << ' ' << ps;
	return 0;
}