#include <iostream>

using namespace std;

int main() {
    /*
    Write a program to find the sum of all the odd integers in the range 1 to 99
    */
    int result = 0;

    for(int i = 1; i <= 100; i += 2)
    {
        result += i;
    }
    
    cout << result;
    return 0;
}