#include <iostream>
using namespace std;
// Solved by Wasfy Elbaz
int main() {

	long long candies, purchasing_price, selling_price, profit;
	cin >> candies >> purchasing_price >> selling_price;
	profit = (candies * selling_price) - (candies * purchasing_price);
	cout << profit;
	return 0;
}
