
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    const int LABEL_WIDTH = 25;

    double loan_amount;
    double annual_rate;
    double monthly_rate;
    double monthly_payment;
    double amount_paid_back;
    double interest_paid;
    double factor;
    int number_of_payments;

    cout << "Enter the loan amount: $";
    cin >> loan_amount;

    cout << "Enter the annual interest rate (%): ";
    cin >> annual_rate;

    cout << "Enter the number of monthly payments: ";
    cin >> number_of_payments;

    monthly_rate = annual_rate / 100.0 / 12.0;

    factor = pow(1.0 + monthly_rate, number_of_payments);

    monthly_payment = loan_amount * (monthly_rate * factor)
                      / (factor - 1.0);

    amount_paid_back = monthly_payment * number_of_payments;

    interest_paid = amount_paid_back - loan_amount;

    cout << fixed << setprecision(2);

    cout << "\n--- Monthly Loan Payment Report ---\n";

    cout << left << setw(LABEL_WIDTH) << "Loan amount:"
         << right << "$" << loan_amount << "\n";

    cout << left << setw(LABEL_WIDTH) << "Monthly interest rate:"
         << right << monthly_rate * 100.0 << "%\n";

    cout << left << setw(LABEL_WIDTH) << "Number of payments:"
         << right << number_of_payments << "\n";

    cout << left << setw(LABEL_WIDTH) << "Monthly payment:"
         << right << "$" << monthly_payment << "\n";

    cout << left << setw(LABEL_WIDTH) << "Amount paid back:"
         << right << "$" << amount_paid_back << "\n";

    cout << left << setw(LABEL_WIDTH) << "Interest paid:"
         << right << "$" << interest_paid << "\n";

    return 0;
}

