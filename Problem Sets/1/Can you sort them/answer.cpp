#include <iostream>
using namespace std;
// Solved by Wasfy Elbaz
int main() {

	long long a, b, c;
	cin >> a >> b >> c;

	if (a < b && a < c) {

		if (b < c) {
			cout << a << " " << b << " " << c;
		}
		else {
			cout << a << " " << c << " " << b;
		}
	}
	else if (b < a && b < c) {

		if (a < c) {
			cout << b << " " << a << " " << c;
		}
		else {
			cout << b << " " << c << " " << a;
		}
	}
	else if (c < a && c < b) {

		if (a < b) {
			cout << c << " " << a << " " << b;
		}
		else {
			cout << c << " " << b << " " << a;
		}
	}
	else if (a == b && a == c) {
		cout << a << " " << b << " " << c;
	}
	 else if (a == b){
        if (c > a) {
            cout << a << " " << b << " " << c;
        }
        else {
            cout << c << " " << a << " " << b;
        }
   }
    else if (c == b) {
        if (a > c) {
            cout << c << " " << b << " " << a;
        }
        else {
            cout << a << " " << c << " " << b;
        }
    }
    else if (a == c) {
        if (b > a) {
            cout << a << " " << c << " " << b;
        }
        else {
            cout << c << " " << a << " " << b;
        }
    }
	return 0;
}
