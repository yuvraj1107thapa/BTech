#include <bits/stdc++.h>
using namespace std;

int compute_order_X(int X) {
	if (X == 0)return 1;
	int count_digits = 0;
	while (X > 0) {
		count_digits++;
		X = X / 10;
	}
	return count_digits;
}

bool checkArmstrongNumber(int X) {
	int N = compute_order_X(X);
	int Sum = 0, tmp_X = X;
	while (tmp_X > 0) {
		int last_digit = tmp_X % 10;
		Sum = Sum + pow(last_digit, N);
		tmp_X = tmp_X / 10;
	}
	return (Sum == X);
}

int main() {
	int n;
	cout << "Enter a number: ";
	cin >> n;
	if (checkArmstrongNumber(n)) {
		cout << n << " " << "is an Armstrong Number\n";
	} else {
		cout << n << " " << "is not an Armstrong Number\n";
	}
	return 0;
}
