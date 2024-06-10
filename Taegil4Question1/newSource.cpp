#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
/*
	Name: Amiel Mazuz, I.D: 208909309
	Course name: Computer Science Introduction
	Targil 3, Question 2
	What does the program do? It draws 10 numbers between 1 and 1000 (including), print them, and print if they are sorted or not
*/
int main()
{
	srand(time(0));
	int num, temp, answer = 0;
	int low = 1;
	int high = 1000;
	num = (rand() % (high - low + 1)) + low;
	for (int i = 0; i < 10; i++)
	{
		temp = num;
		cout << num << " ";
		num = (rand() % (high - low + 1)) + low;
		if (num < temp)
		{
			answer = 1;
		}
	}
	if (answer == 1)
		cout << endl << "not sorted list" << endl;
	else
		cout << endl << "sorted list" << endl;
	return 0;
}
/*
142
222
365
4
180
25
32
929
913
348
not sorted list
*/