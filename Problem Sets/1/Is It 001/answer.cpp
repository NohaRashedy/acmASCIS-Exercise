#include <iostream>
using namespace std;
// Solved by Wasfy Elbaz
int main() {

	int N, M;
	char S;
	cin >> N;
	cin >> S;
	cin >> M;

	switch(S) {

		case '>':
			if (N > M) {
				cout << "Right";
			}
			else {
				cout << "Wrong";
			}

			break;

		case '=':
			if (N == M) {
				cout << "Right";
			}
			else {
				cout << "Wrong";
			}

			break;

		case '<':
			if (N < M) {
				cout << "Right";
			}
			else {
				cout << "Wrong";
			}

			break;
	}
	return 0;
}