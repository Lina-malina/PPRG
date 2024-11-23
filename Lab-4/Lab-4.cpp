#include <iostream>;

using namespace std;

int getLargestNumberInArray() {
	int length;

	cout << "Please enter the table length \n";
	cin >> length;

	if (length <= 0) {
		cout << "Tables's length should be positive number \n";
		return 1;
	}

	int* table = new int[length];

	//if (length > 0) {
	//	int* table = new int[length];
	//}
	//else {
	//	cout << "Tables's length should be greater than zero \n";
	//	return 1;
	//}

	cout << "Please provide " << length << " numbers \n";
	for (int i = 0; i < length; i++) {
		cin >> table[i];
	}

	int result = table[0];

	for (int i = 1; i < length; i++) {
		result = result > table[i] ? result : table[i];
	}

	return result;
}

int getFrequientNumberInArray() {
	int length;

	cout << "Please enter the table length \n";
	cin >> length;

	if (length <= 0) {
		cout << "Tables's length should be positive number \n";
		return 1;
	}

	int* table = new int[length];

	cout << "Please provide " << length << " numbers \n";
	for (int i = 0; i < length; i++) {
		cin >> table[i];
	}


}
