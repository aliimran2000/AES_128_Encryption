#include<iostream>
#include"functions.h"

using namespace std;

int main() {


	unsigned char state[16] = {
		0xba, 0x84, 0xe8, 0x1b,
		0x75, 0xa4, 0x8d, 0x40,
		0xf4, 0x8d, 0x06, 0x7d,
		0x7a, 0x32, 0x0e, 0x5d
	};

	
	unsigned char expected[16] = {
		0x63, 0xeb, 0x9f, 0xa0,
		0x2f, 0x93, 0x92, 0xc0,
		0xaf, 0xc7, 0xab, 0x30,
		0xa2, 0x20, 0xcb, 0x2b
	};



	for (int i = 0; i < 16; ++i) {
		int temp = (int)state[i];
		cout << hex << temp << " ";

		if (i == 3 or i == 7 or i == 11)
			cout << endl;

	}
	cout << endl;
	cout << "--------------";
	cout << endl << endl;

	InvMixColumn(state);


	for (int i = 0; i < 16; ++i) {
		int temp = (int)state[i];
		cout << hex << temp << " ";

		if (i == 3 or i == 7 or i == 11)
			cout << endl;
	}
	cout << endl;
	cout << "--------------";
	cout << endl << endl;

}