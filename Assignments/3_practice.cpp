#include <iostream>

using namespace std;

int main() {
    //Write a program to input four numbers and display them in reverse order.

    int a[4];
    for(int i = 0; i < 4; i++)
    {
    cout << "Enter #" << i + 1 << ": "; 
    cin >> a[i];
    }
    for(int i = 3; i >= 0; i--)
    {
        cout << a[i];
    }
    return 0;
}