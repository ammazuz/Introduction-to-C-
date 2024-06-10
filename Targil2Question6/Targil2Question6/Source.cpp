#include <iostream>
using namespace std;
int main()
{
	int a;
	int b;
	cout << "enter two numbers:" << endl;
	cin >> a >> b;
	cout << a << "+" << b << "=" << a + b << endl;
	cout << a << "-" << b << "=" << a - b << endl;
	cout << a << "*" << b << "=" << a * b << endl;
	float c = (float) a / b;
	cout << a << "/" << b << "=" << c << endl;
}