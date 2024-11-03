#include <iostream>;
#include <algorithm>;

using namespace std;

void printSum() {
	int n;

	cout << "Please enter a number\n";
	cin >> n;

	int sum = 0;
	int result = 0;

	for (int i = 1; i <= n; i++) {
		sum += i;
		result += sum;
	}

	cout << "Result is " << result << endl;
}

void printFigures() {
	int a, b;

	cout << "Please enter two numbers\n";
	cin >> a >> b;
	cout << "You have entered numbers: " << a << " and " << b << endl;

	for (int i = 1; i <= a; i++) {
		cout << "*";
	}

	cout << endl << endl;

	for (int i = 1; i <= b; i++) {
		cout << "*\n";
	}

	cout << endl;

	for (int i = 1; i <= b; i++) {
		for (int j = 1; j <= a; j++) {
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;

	for (int i = 1; i <= b; i++) {
		for (int j = 1; j <= a; j++) {
			if (i == 1 || i == b) {
				cout << "*";
			}
			else if (j == 1 || j == a) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}

	cout << endl;

	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= i; j++) {
			cout << '*';
		}
		cout << endl;
	}

	cout << endl;

	for (int i = a; i >= 1; i--) {
		for (int j = 1; j <= a; j++) {
			string symbol;

			symbol = a - i >= j ? " " : "*";
			cout << symbol;
		}
		cout << endl;
	}
}

int printYearInfo() {
	int month;

	cout << "Please enter a number between 1 and 12\n";
	cin >> month;

	if (month < 1 || month > 12) {
		cout << "Invalid number\n";

		return 1;
	}

	switch (month) 
	{
	case 1: 
		cout << "January has 31 days and it's cloudly then.";
		break;

	case 2:
		cout << "February has 28 days and it's cloudly then.";
		break;

	case 3:
		cout << "March has 31 days and it's cloudly then.";
		break;

	case 4:
		cout << "April has 30 days and it's sunny then.";
		break;

	case 5:
		cout << "May has 31 days and it's sunny then.";
		break;

	case 6:
		cout << "June has 30 days and it's sunny then.";
		break;

	case 7:
		cout << "July has 31 days and it's sunny then.";
		break;

	case 8:
		cout << "August has 31 days and it's sunny then.";
		break;

	case 9:
		cout << "September has 30 days and it's sunny then.";
		break;

	case 10:
		cout << "October has 31 days and it's cloudly then.";
		break;

	case 11:
		cout << "November has 30 days and it's cloudly then.";
		break;

	case 12:
		cout << "December has 31 days and it's cloudly then.";
		break;
	}

	return 0;
}
