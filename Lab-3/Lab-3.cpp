#include <iostream>;

using namespace std;

void calculate() {
	float x;
	float y;

	cout << "Please enter two numbers\n";
	cin >> x >> y;

	cout << "You have entered numbers " << x << " and " << y << endl;

	float sum = x + y;
	float difference = x - y;
	float multiplying = x * y;
	float division = x / y;

	cout << "x + y = " << sum << endl;
	cout << "x - y = " << difference << endl;
	cout << "x * y = " << multiplying << endl;
	cout << "x / y = " << division << endl;

}

int printSymbols() {
	char userInput;

	cout << "Please enter a symbol \n";
	cin >> userInput;

	while (userInput != 't') {
		cout << "Please enter a symbol \n";
		cin >> userInput;
	}

	return 0;
}

int solveQuadraticEquation() {
	int a, b, c;
	int delta;
	int solution1;
	int solution2;

	cout << "The Standart form of Qadratic Equation looks like ax^2 + bx + c = 0 \n";
	cout << "Please enter values for a, b, c \n";
	cin >> a >> b >> c;

	cout << "With provided values the quadratic equation takes the form of " << a << "x^2 + " << b << "x + " << c << " = 0 \n";

	delta = pow(b, 2) - 4 * a * c;

	if (delta < 0) {
		cout << "There are no solutions for provided values \n";

		return 1;
	} if (delta == 0) {
		solution1 = -b / 2 * a;
		cout << "The solution of equation is " << solution1 << endl;

		return 0;
	}
	else {
		solution1 = (-b + sqrt(delta)) / 2 * a;
		solution2 = (-b - sqrt(delta)) / 2 * a;
		cout << "The solutions of equation are " << solution1 << " and " << solution2 << endl;

		return 0;
	}
};

void printPascalTriangle() {
	int rows;
	int numbersInRow;

	cout << "Please enter the number of rows for the Pascal's Triangle \n";
	cin >> rows;

	int i;

	for (i = 0; i < rows; i++) {
		numbersInRow = i + 1;

		for (int j = 1; j <= numbersInRow; j++) {
			if (j == 1 || j == numbersInRow) {
				cout << "1";
			}
			else if (j == 2 || j == numbersInRow - 1) {
				cout << i;
			}
			else if (j == 3) {
				cout << i * (i - 1) / 2;
			}
			else if (j == 4) {

			}
			else {
				int rowFactorial;
				int number
			}
		}
		cout << endl;
	}
};

int factorial(int n) {
	int result;


}

void typeCasting() {
	int number;

	cout << "Enter number \n";

	cin >> number;

	char letter;

	letter = (char)number;

	cout << "Number is " << number << endl;
	cout << "Letter is " << letter << endl;
}
