# Is It 001

## Problem

*Someday, Koko found a paper with a comparison written on it. He doesn't know if it is right or wrong. Can you help in determining that?*

**Input**
<br>
*You will be given a number N, then a sign S then a second number **M ( - 100  ≤  N,M  ≤  100), S can be ('<', '>','=') without the quotations***.

**Output**
<br>
*Output "Right" if the comparison is true, "Wrong" otherwise.*

## Rules

  - *time limit per test: 0.25 seconds*
  - *memory limit per test: 4 megabytes*
  - *input: standard input*
  - *output: standard output*
  
## Answer

```
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
```