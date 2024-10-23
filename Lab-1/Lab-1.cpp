#include <iostream>;
#include <algorithm>;

using namespace std;

void printInfo() {
    cout << "Angelina Pobyvanets\n" << "s32934\n" << "PJATK\n";
}

void isPositiveNum() {
    int number;

    cout << "Please enter a number\n";
    cin >> number;

    if (number == 0) {
        cout << "Your number is 0\n";
    }
    else if (number > 0) {
        cout << "Your number is positive\n";
    }
    else {
        cout << "Your number is negative\n";
    }
}

void isEvenNum() {
    int number;

    cout << "Please enter a number\n";
    cin >> number;

    if (number == 0) {
        cout << "Your number is 0\n";
    }
    else if (number % 2 == 0) {
        cout << "Your number is even\n";
    }
    else {
        cout << "Your number is odd\n";
    }
}

void printLargestNum1() {
    int a, b, c;
    int largest;

    cout << "Please enter three numbers\n";
    cin >> a >> b >> c;

    if (a > b && a > c) {
        largest = a;
    }
    else if (b > a && b > c) {
        largest = b;
    }
    else {
        largest = c;
    }

    cout << "The largest number is " << largest << endl;
}

void printLargestNum2() {
    int a, b, c;
    int largest;

    cout << "Please enter three numbers\n";
    cin >> a >> b >> c;

    largest = max(max(a, b), c);

    cout << "The largest number is " << largest << endl;
}

void printLargestNum3() {
    const int size = 3;
    int arr[size];

    cout << "Please enter three numbers\n";

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + size);

    int largest = arr[size - 1];

    cout << "The largest number is " << largest << endl;
}