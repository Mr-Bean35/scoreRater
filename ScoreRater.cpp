/*
PROGRAM NAME: scoreReaderV2.0
DATE: 05-10-22
PROGRAMMER NAME: Benjamin Hensley Jr.
*/

#include <iostream>
using namespace std;


int main(); {
	int score;

	cout << "Enter your score: ";
	cin >> score;

	if (0 < score && score >= 1000) {
		cout << "You did great!" << endl;
	} 
	else if (0 < score && score < 1000) {
		cout << "You are doing good. Keep it up :)!" << endl;
	} 
	else {
		cout << "You're trying your best" << endl;
	} 

	return 0;

}
