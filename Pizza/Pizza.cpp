#include <iostream>
using namespace std;


int main()
{
    int people;
    const int piecesPerPizza = 8;
    int pizzaAmount;
    int piecesForPerson;

    cout << "Enter the number of people on the party\n";
    cin >> people;

    cout << "Enter the amount of pizzas on the party\n";
    cin >> pizzaAmount;

    piecesForPerson = pizzaAmount * piecesPerPizza / people;

    cout << "Every pearson will get " << piecesForPerson << " piecies of pizza" << endl;

    return 0;
}
