#include <iostream>

using namespace std;
// Solved by Wasfy Elbaz
int main() {

	long int N;
	cin >> N;

	if ((N % 2) == 0) {
		if ((N % 10) == 4 || (N % 10) == 7) {cout << "lucky even";}
		else { cout << "unlucky even"; }
	}
	else {
		if ((N % 10) == 4 || (N % 10) == 7) {cout << "lucky odd";}
		else { cout << "unlucky odd"; }
	}
	return 0;
}