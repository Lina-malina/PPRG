#include <iostream>;
#include <algorithm>;
#include <iomanip>;

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

	cout << "Please provide " << length << " numbers \n";
	for (int i = 0; i < length; i++) {
		cin >> table[i];
	}

	int result = table[0];

	for (int i = 1; i < length; i++) {
		result = result > table[i] ? result : table[i];
	}

	delete[] table;

	return result;
}

int getFrequentNumberInArray() {
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

	sort(table, table + length);

	int result = *table;
	int elFrequency = 1;
	int maxFrequency = 1;
	

	for (int* ptr = table + 1; ptr < table + length; ptr++) {
		elFrequency = *ptr == *(ptr - 1) ? ++elFrequency : 1;

		if (elFrequency > maxFrequency) {
			maxFrequency = elFrequency;
			result = *ptr;
		}
	}

	delete[] table;

	return result;
}

void printMatrix() {
	int matrix[10][10];

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			switch (i)
			{
			case 0:
				matrix[j][i] = j;
				break;
			case 1: 
				matrix[j][i] = j + j;
				break;
			case 2:
				matrix[j][i] = pow(j, 2);
				break;
			case 3: 
				matrix[j][i] = i + j;
				break;
			case 4: 
				matrix[j][i] = i - j;
				break;
			default:
				matrix[j][i] = 0;
				break;
			}
		}
	}

	cout << "Graphical Representation of the Matrix:\n\n";

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << setw(4) << matrix[i][j];
		}
		cout << endl;
	}
}
