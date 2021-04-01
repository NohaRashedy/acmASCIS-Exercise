#include <iostream>

using namespace std;
// Solved by Wasfy Elbaz
int main() {

    long long a, c, b, d;
    cin >> a >> b >> c >> d;

    if (d == (a - b + c)) {
    	cout << "YES";
    	}
    else if (d == (a + b - c)) {
    	cout << "YES";
    	}
    else if (d == (a * b + c)) {
    	cout << "YES";
    	}
    else if (d == (a + b * c)) {
    	cout << "YES";
    	}
    else if (d == (a - b * c)) {
    	cout << "YES";
    	}
    else if (d == (a * b - c)) {
    	cout << "YES";
    	}
    else {
    	cout << "NO";
    	}

    return 0;
}