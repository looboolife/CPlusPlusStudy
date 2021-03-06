#include <iostream>
#include <climits>

void _03_01() {
	using namespace std;

	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LONG_MAX;
	//多少字节
	cout << "int is " << sizeof(int) << " bytes" << endl;
	cout << "short is " << sizeof(n_short) << " bytes" << endl;
	cout << "long is " << sizeof(n_long) << " bytes" << endl;
	cout << "long long is " << sizeof(n_llong) << " bytes" << endl;
	cout << endl;

	cout << "Maximum values: " << endl;
	cout << "int: " << n_int << endl;
	cout << "short: " << n_short << endl;
	cout << "long: " << n_long << endl;
	cout << "long long: " << n_llong << endl << endl;

	cout << "Minimum int value: " << INT_MIN << endl;
	//每个字节多少位
	cout << "Bits per byte=  " << CHAR_BIT << endl;

}