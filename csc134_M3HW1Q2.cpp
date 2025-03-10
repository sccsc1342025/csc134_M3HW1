// CSC 134
// M3HW1-Gold
// Sebastian Camacho
// 03/08/2025

#include <iostream>

using namespace std;

int main()
{
    // variables
    double mealPrice;
    int orderType;
    double tax, tip = 0.0, totalAmount;

    // constants
    const double Tax_rate = 0.05;
    const double Tip_rate = 0.15;

    // price of meal
    cout << "Please enter the price of the meal:$";
    cin >> mealPrice;

    // order here or to go
    cout << "Is the order for here or to go? Type 1 for here and 2 for to go:";
    cin >> orderType;

    // 15% tip
    if (orderType == 1) {
        tip = mealPrice * Tip_rate;
    }

    // tax
    tax = mealPrice * Tax_rate;

    // meal price, tax, tip, and total amount
    cout << "the meal price is:$" << mealPrice << endl;
    cout << "Tax is 5%:$" << tax << endl;
    if (orderType == 1) {
        cout << "Tip is 15%: " << tip << endl;
    }else {
        cout << "Tip is 15%:0.00$ (To go)" << endl;
    }
    totalAmount = mealPrice + tax + tip;
    cout << "Total amount:$" << totalAmount << endl;


    return 0;
}