/**
 * defining your own function
 * 
 * 自定义函数
 */
#include <iostream>
using namespace std;
// 函数原型
void simon(int);

void _02_05() {
	simon(3);
	cout << "Pick an Integer: ";
	int count;
	cin >> count;
	simon(count);
	cout << "Done!" << endl;
}


void simon(int n) {
	cout << "Simon says touch your toes " << n << " times." << endl;
}