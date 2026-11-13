#include <iostream>

using namespace std;

int main() {
    int number_of_transactions, age_in_years;
    float total_pay, tax_payment, distance, average;
    long int record_position, count;
    char account_type;
    double gross_pay;

    age_in_years = number_of_transactions = 123;
    total_pay = tax_payment = distance = average = 123.123f;
    record_position = count = 123123L;
    account_type = 'a';
    gross_pay = 123.123;

    cout << age_in_years << endl << number_of_transactions << endl;
    cout << total_pay << endl << tax_payment << endl << distance << endl << average << endl;
    cout << record_position << endl << count << endl ;
    cout << account_type << endl;
    cout << gross_pay << endl;


    return 0;
}