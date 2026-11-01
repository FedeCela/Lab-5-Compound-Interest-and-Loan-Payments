
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    const int LABEL_WIDTH = 25;

    double principal;
    double annual_rate;
    double rate;
    double amount;
    double interest_earned;
    int times_compounded;

    cout << "Enter the principal balance: $";
    cin >> principal;

    cout << "Enter the annual interest rate (%): ";
    cin >> annual_rate;

    cout << "Enter the number of times interest is compounded per year: ";
    cin >> times_compounded;

    rate = annual_rate / 100.0;

    amount = principal * pow(1.0 + rate / times_compounded,
                             times_compounded);

    interest_earned = amount - principal;

    cout << fixed << setprecision(2);

    cout << "\n--- Compound Interest Report ---\n";

    cout << left << setw(LABEL_WIDTH) << "Annual interest rate:"
         << right << annual_rate << "%\n";

    cout << left << setw(LABEL_WIDTH) << "Times compounded:"
         << right << times_compounded << "\n";

    cout << left << setw(LABEL_WIDTH) << "Principal:"
         << "$" << principal << "\n";

    cout << left << setw(LABEL_WIDTH) << "Interest earned:"
         << "$" << interest_earned << "\n";

    cout << left << setw(LABEL_WIDTH) << "Amount in savings:"
         << "$" << amount << "\n";

    return 0;
}
