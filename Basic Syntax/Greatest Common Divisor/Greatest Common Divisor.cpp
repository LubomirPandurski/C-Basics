// Greatest Common Divisor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int gcd(int a, int b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
int main() {
	int a, b;
	cin >> a >> b;
	if (a == b) {
		cout << a << endl;
		return 0;
	}
	if (a % 2 != 0 && a % 3 != 0 && a % 5 != 0 && a % 7 != 0 &&
		b % 2 != 0 && b % 3 != 0 && b % 5 != 0 && b % 7 != 0) {
		cout << "1" << endl;
		return 0;
	}
	else {
		cout << gcd(a, b) << endl;
	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
