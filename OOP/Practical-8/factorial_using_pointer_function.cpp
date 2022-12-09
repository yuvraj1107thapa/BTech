#include <bits/stdc++.h>
using namespace std;

int findFactorial(int no) {
	if (no == 2){
		return no;
	}
	return no * findFactorial(no - 1);
}

int main() {
	int no;
	cout << "Enter a number to find factorial : " << endl; 
    cin >> no;
	int (*func)(int);
	func = &findFactorial;
	cout << func(no) << endl;
    return 0;
}