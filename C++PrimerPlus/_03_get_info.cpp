#include <iostream>

void _02_03() {
	using namespace std;

	int carrots;
	cout << "How many carrots do you have?" << endl;
	//c++ input
	cin >> carrots;
	cout << "Here are two more. ";
	carrots += 2;
	cout << "Now you have " << carrots << " carrots." << endl;

}