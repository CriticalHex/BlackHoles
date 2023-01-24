#include<iostream>

using namespace std;

const long double G = 6.674e-11;
const long double c = 2.998e8;

long double scr(long double mass) {
	return (2 * G * mass) / pow(c,2);
}

int main() {
	long double input = 0;
	while (true) {
		cout << "Enter mass in kilograms: ";
		cin >> input;
		cout << "Radius is " << scr(input) << " meters." << endl;
	}
}