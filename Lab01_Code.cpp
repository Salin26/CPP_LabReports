#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double price1, price2;
    int qty1, qty2;
    const double VAT_RATE = 0.10; // 10% VAT

    cout << "Enter price of item 1: ";
    cin >> price1;
    cout << "Enter quantity of item 1: ";
    cin >> qty1;

    cout << "Enter price of item 2: ";
    cin >> price2;
    cout << "Enter quantity of item 2: ";
    cin >> qty2;

    double subtotal = price1 * qty1 + price2 * qty2;
    double vat = subtotal * VAT_RATE;
    double grandTotal = subtotal + vat;

    cout << fixed << setprecision(2);
    cout << "Total (without VAT): " << subtotal << "\n";
    cout << "VAT (10%): " << vat << "\n";
    cout << "Grand Total: " << grandTotal << "\n";

    return 0;
}