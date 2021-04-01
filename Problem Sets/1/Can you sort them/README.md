# Boo and The Equation

## Problem

*Mared and Shalaby were on their mission to get Boo back to her room's door. Luckily they have found it, but unfortunately, the door was locked.*

![codeforces](https://espresso.codeforces.com/82a8e6f0b449e5a748da3fb90ea82771bc660ddb.png)

*Three random numbers were written on it, and in order to unlock the door these numbers must be sorted in ascending order. So please help them return Boo to her room.*

## a□b□c=d

*Sadly, AliBaba was really bad at math and he aksed you to help him solve this puzzle.*

**Input**
<br>
*The input consists of three integers **A, B and C (−10^9≤A,B,C≤10^9).***.

**Output**
<br>
*Output the three integers in the correct ascending order.*

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
	return 0;
}

```