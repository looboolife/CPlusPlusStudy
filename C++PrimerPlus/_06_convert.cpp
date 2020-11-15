/**
 * 
 * @author looboolife
 * @date 2020-11-15
 * 
 * define our own function with return
 */
#include <iostream>
// function prototype
int stone_to_pound(int);

void _02_06() {
	using namespace std;
	int stone;
	cout << "Enter the weight in stone: ";
	cin >> stone;
	int pounds = stone_to_pound(stone);
	cout << stone << " stone = ";
	cout << pounds << " pounds." << endl;

}

// one stone  equal 14 multiply by one pound
int stone_to_pound(int sts) {
	return 14 * sts;
}
