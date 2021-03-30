# Boo and The Equation

## Problem

*Boo had a long and hard day at school. When she came back, she slept immediately.*

*Unfortunately, Boo has a homework to be done. The homework is very easy but she is very tired. If Boo goes to school without doing the homework she will get punished. So she asks for your help.*

*The homework is very easy. Given an arithmetic equation you have to print the result of this equation. The equation is given below:*
## (2a+3b)×5c

![codeforces](https://espresso.codeforces.com/67e0bdbc61247a48564ce7ee476cc12bd8a68ff4.png)

**Input**
<br>
*The input consists of one line containing 3 decimal numbers **a,b and c (1≤a,b,c≤10^3)***.

**Output**
<br>
*Output one line containing the required answer.*

## Rules

  - *time limit per test: 0.25 seconds*
  - *memory limit per test: 4 megabytes*
  - *input: standard input*
  - *output: standard output*
  
## Answer

```
#include <iostream>
#include <iomanip>

using namespace std;
// Solved by Wasfy Elbaz
int main() {

    double a, b, c;
    cin >> a >> b >> c;
    cout << fixed << setprecision(6) << ((2*a) + (3*b)) * 5 * c;
    return 0;
}
```
