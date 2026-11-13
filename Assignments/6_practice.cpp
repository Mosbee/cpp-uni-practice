#include <iostream>

using namespace std;

int main() {
    /*
    Rewrite the following if-else statement using a switch statement:
    if (marriage_status == 'S')
    cout << "single";
    else if (marriage_status == 'M')
    cout << "married";
    else if (marriage_status == 'W')
    cout << "widowed";
    else if (marriage_status == 'E')
    cout << "separated";
    else if (marriage_status == 'D')
    cout << "divorced";
    else
    cout << "error: invalid code";
    */
    char marriage_status;
    cin >> marriage_status;
    switch(marriage_status)
    {
        case 'S':
        cout << "Single";
        break;
        case 'M':
        cout << "Married";
        break;
        case 'W':
        cout << "Widowed";
        break;
        case 'E':
        cout << "Seperated";
        break;
        case 'D':
        cout << "Divorced";
        break;
        default:
        cout << "error: invalid code";
    }
    return 0;
}