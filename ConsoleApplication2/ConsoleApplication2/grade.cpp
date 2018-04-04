#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	
	int exer, i, score, total;
	int calcScore = 0, calcTotal = 0;
	double percent;
	
	cout << "How many exercises to input? ";
	cin >> exer;

	for (i = 1; i <= exer; i++)
	{
		cout << "\nScore receieved for exercise " << i << ": ";
		cin >> score;
		cout << "Total points possible for exercise " << i << ": ";
		cin >> total;
		calcScore += score;
		calcTotal += total;
	}
	cout << fixed << showpoint << setprecision(2);
	percent = ((double)calcScore / calcTotal)*100;
	cout << "\nYour total is " << calcScore << " out of " << calcTotal << ", or " << percent << "%." << endl;


	return 0;
}
