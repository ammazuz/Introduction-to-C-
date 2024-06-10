#include <iostream>
using namespace std;
int main()
{
	int takeoffH, takeoffM, takeoffS;
	int durationH, durationM, durationS;
	int arrivalH, arrivalM, arrivalS;
	cout << "enter flight takeoff:" << endl;
	cin >> takeoffH >> takeoffM >> takeoffS;
	cout << "enter flight duration:" << endl;
	cin >> durationH >> durationM >> durationS;
	arrivalH = takeoffH + durationH;
	arrivalM = takeoffM + durationM;
	arrivalS = takeoffS + durationS;
	while (arrivalS > 59) {
		arrivalM++;
		arrivalS = arrivalS - 60;
	}
	while (arrivalM > 59) {
		arrivalH++;
		arrivalM = arrivalM - 60;
	}
	while (arrivalH > 23) {
		arrivalH = arrivalH - 24;
	}
	cout << "flight arrival is:" << endl << arrivalH << ":" << arrivalM << ":" << arrivalS;
	return 0;
}