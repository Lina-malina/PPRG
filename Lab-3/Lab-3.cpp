#include <iostream>;
#include <iomanip>;

using namespace std;

int calculate() {
	float x, y;

	cout << "Please enter two numbers\n";
	cin >> x >> y;

	cout << "You have entered numbers " << x << " and " << y << endl;

	float sum = x + y;
	float difference = x - y;
	float multiplying = x * y;
	float division;

	if (y != 0) {
		division = x / y;
	}
	else {
		cout << "Division by 0 is prohibited." << endl;
		return 1;
	}

	cout << fixed << setprecision(2);
	cout << "x + y = " << sum << endl;
	cout << "x - y = " << difference << endl;
	cout << "x * y = " << multiplying << endl;
	cout << "x / y = " << division << endl;

	return 0;
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
	int a, b, c, delta;
	float solution1, solution2;

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

int factorial(int n) {
	int result = 1;

	if (n == 0 || n == 1) {
		return result;
	}

	for (int i = 2; i <= n; i++) {
		result *= i;
	}

	return result;
}

void printPascalTriangle() {
	int rows;

	cout << "Please enter the number of rows for the Pascal's Triangle \n";
	cin >> rows;

	cout << endl;

	for (int i = 0; i <= rows; i++) {
		for (int j = 0; j <= i; j++) {
			cout << factorial(i) / (factorial(j) * factorial(i - j)) << " ";
		}
		cout << endl;
	}
};

void typeCasting() {
	int number;

	cout << "Enter number \n";

	cin >> number;

	char letter;

	letter = (char)number;

	cout << "Number is " << number << endl;
	cout << "Letter is " << letter << endl;
}
