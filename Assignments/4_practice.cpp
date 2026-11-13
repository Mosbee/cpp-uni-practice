#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    /*
    Write a program to input three floating-point numbers from the keyboard
    and to calculate (a) their sum and (b) their average. Display the results to 
    three decimal places.
    */
    float a[3], sum = 0, avg = 0;
    for(int i = 0; i < 3; i++){
        cout << "Enter #" << i + 1 << ": ";
        cin >> a[i];
        sum += a[i];
    }
    avg = sum / 3 ;
    cout << "The sum of the numbers you entered is: " << fixed << setprecision(3) << sum << endl;
    cout << "The average of the numbers you entered is: " << fixed << setprecision(3) << avg << endl;
    
    return 0;
}