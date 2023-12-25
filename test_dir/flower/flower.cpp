#include <iostream>
#pragma warning(disable : 4996)
using namespace std;
int main() 
{
freopen("flower.in", "r", stdin);
freopen("flower.out", "w", stdout);
	int n;
	cin >> n;
	if (n == 1)
	{
		for (int m = 1; m < 9; m++) {
			if (m*m== m) {
				cout << m << endl;
			}
		}
	}
	if (n == 2)
	{
		for (int m = 10; m < 99; m++) {
			int a = m % 10;
			int b = m / 10 % 10;
			if (a * a + b * b == m) {
				cout << m << endl;
			}
		}
	}
	if (n == 3) {
		for (int m = 100; m < 999; m++) {
			int a = m % 10;
			int b = m / 10 % 10;
			int c = m / 100;

			if (a * a * a + b * b * b + c * c * c == m) {
				cout << m << endl;
			}
		}
	}
	if (n == 4) {
		for (int m = 1000; m < 9999; m++) {
			int a = m % 10;
			int b = m / 10 % 10;
			int c = m / 100;
			int d = m / 1000;
			if (a * a * a * a + b * b * b * b + c * c * c * c + d * d * d * d == m) {
				cout << m << endl;
			}
		}
	}
	if (n == 5) {
		for (int m = 10000; m < 99999; m++) {
			int a = m % 10;
			int b = m / 10 % 10;
			int c = m / 100;
			int d = m / 1000;
			int e = m / 10000;
			if (a * a * a * a * a + b * b * b * b * b + c * c * c * c * c + d * d * d * d * d + e * e * e * e * e == m) {
				cout << m << endl;
			}
		}
	}
	if (n == 6) {
				for (int m = 100000; m < 999999; m++) {
					int a = m % 10;
					int b = m / 10 % 10;
					int c = m / 100;
					int d = m / 1000;
					int e = m / 10000;
					int f = m / 100000;
					if (a * a * a * a * a * a + b * b * b * b * b * b + c * c * c * c * c * c + d * d * d * d * d * d + e * e * e * e * e * e + f * f * f * f * f * f == m) {
						cout << m << endl;
					}
				}
			}
fclose(stdin);
fclose(stdout);
}