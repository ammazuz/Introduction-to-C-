#include <iostream>
using namespace std;
int main()
{
	int a;
	int b;
	const int f = 5;
	const int s = 6;
	cout << "enter two numbers:" << endl;
	cin >> a >> b;
	float c = (static_cast<float>(f * a + 3) / (s * b + 2));
	cout << "C=" << c;
}