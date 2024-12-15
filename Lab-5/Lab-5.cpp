#include <iostream>;
#include <vector>;
#include <array>;

using namespace std;

void getVectorInfo() {
	int vectorSize;

	cout << "Please enter the number of elements\n";
	cin >> vectorSize;

	vector<int> userVector;

	for (int i = 0; i < vectorSize; i++) {
		int value;

		cout << "Please enter the element value\n";
		cin >> value;

		userVector.push_back(value);
	}

	int maxIndex = 0;

	for (int i = 1; i < vectorSize; i++) {
		maxIndex = userVector[maxIndex] > userVector[i] ? maxIndex : i;
	}

	cout << "The largest value is " << userVector[maxIndex] << 
		" and it's index equals " << maxIndex << endl;
};

void getArrayInfo() {
	array<int, 8> arr = { 25, -1, 999, 34, 106, 0, -40307, 55 };

	int size = arr.size();
	int middle = size / 2;

	cout << "Size of the array is " << size << endl;
	
	cout << endl << "Elements of the array are: " << endl;

	for (int i = 0; i < middle; i++) {
		cout << arr[i] << "\t" << arr[middle + i] << endl;
	}

	cout << endl << "Formatted array: " << endl;

	for (int i = 0; i < middle; i++) {
		cout << arr[middle + i] << "\t" << arr[i] << endl;
	}
};

