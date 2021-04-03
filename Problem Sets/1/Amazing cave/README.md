# Amazing Cave

## Problem

*Our friend Zoma found a magical cave so he entered it. After he walked for several hours in the cave he found a magical door which opens if he said the right magical words, there was also a number X above the magical door.*

*He found a piece of paper near the magical door written on it :*
**"To open the magical door you should say X is "lucky" or "unlucky" also you should say X is "even" or "odd" ".**

*Zoma knows that the lucky numbers are the numbers which ends with 4 or 7, can you tell Zoma the magical words to help him open the magical door?*

**Input**
<br>
*the input consists of integer ** X (1 ≤ X ≤ 10^9)***.

**Output**
<br>
*Print two words separated with space between them , the first word should be "lucky" or "unlucky" and the second word should be "even" or "odd" according to the problem.*

## Rules

  - *time limit per test: 1 second*
  - *memory limit per test: 64 megabytes*
  - *input: standard input*
  - *output: standard output*
  
## Answer

```
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
```