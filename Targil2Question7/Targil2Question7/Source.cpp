#include <iostream>
using namespace std;
int main()
{
	cout << "enter a three digit number:" << endl;
	int num;
	int sum = 0;
	cin >> num;
	if (num < 1000 && num > 99) {
		while (num > 0) {
			sum = sum + num % 10;
			num = num / 10;
		}
		cout << "the sum is: " << sum;
	}
	else
		cout << "invalid number";
}