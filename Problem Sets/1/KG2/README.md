# KG2

## Problem

*Lioay is a child in KG2, he has just learnt adding numbers.*

*Unfortunately he doesn't understand it well and he has an assignment, so he asked you to help him to do it.*

*The assignment is calculate the sum of numbers from 1 to n.*

**Input**
<br>
*The input consists of an integer n (0 < n ≤ 10).*

**Output**
<br>
*Print the sum of numbers.*

## Rules

  - *time limit per test: 0.5 seconds*
  - *memory limit per test: 64 megabytes*
  - *input: standard input*
  - *output: standard output*
  
## Answer

```
#include <iostream>

using namespace std;
// Solved by Wasfy Elbaz
int main() {

	int n;
	cin >> n;

	int sum = 0;
	int i = 1;

	while(i <= n) {
		sum += i;
		i++;
	}
	cout << sum;

	return 0;
}
```