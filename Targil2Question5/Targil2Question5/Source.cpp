#include <iostream>
using namespace std;
int main()
{
	int x;
	int y;
	cout << "enter two numbers:" << endl;
		cin >> x >> y;
		cout << "x=" << x << " ,y=" << y << endl;
		int temp = x;
		x = y;
		y = temp;
		cout << "x=" << x << " ,y=" << y << endl;
}