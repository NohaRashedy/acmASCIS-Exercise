# Boo and The Equation

## Problem

*AliBaba was a son of a merchant. After his father's death, AliBaba married a poor woman and settled into the trade of a woodcutter.*

*One day, AliBaba was at work collecting and cutting firewood in the forest, when he happened to overhear a group of 40 thieves visiting their treasure store. The treasure was in a cave. When AliBaba went to the cave he found out that he had to solve a puzzle.*

![codeforces](https://espresso.codeforces.com/dd527a7196d4575920cfb0943d8f700661e06d84.png)

*The puzzle was very easy. AliBaba was given 4 numbers. His task was to check wheather he could get the fourth number by using the arithmetic operators (+,−,×) between the other three numbers. Knowing that an operator can be used only once. *

## a□b□c=d

*Sadly, AliBaba was really bad at math and he aksed you to help him solve this puzzle.*

**Input**
<br>
*The first line of input contains 4 integers **a,b,c and d (−10^9≤a,b,c≤10^9),(−10^18≤d≤10^18)***.

**Output**
<br>
*Print "YES"(quotes for clarity) if you found the fourth number using the first three, otherwise print "NO"(quotes for clarity).*
*You can print each letter in any case (upper or lower).*

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
```
