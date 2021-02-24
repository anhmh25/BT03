#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[1000];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int max = a[0], min = a[0], sumOfOdd = 0, sumOfEven = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0)sumOfOdd += a[i];
		else sumOfEven += a[i];
		if (a[i] > max)max = a[i];
		if (a[i] < min)min = a[i];
	}
	cout << max << endl << min << endl << sumOfEven << endl << sumOfOdd;
	return 0;

}