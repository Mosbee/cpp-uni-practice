#include <iostream>

using namespace std;

int main() {
    /*
    In a triangle, the sum of any two sides must be greater than the third side. 
    Write a program to input three numbers and determine if they form a valid 
    triangle.
    */
    double side1, side2, side3;
    double sumOfTwoSides;
    cin >> side1 >> side2 >> side3;
    sumOfTwoSides = side1 + side2;
    if ((side1 + side2 > side3) && (side2 + side3 > side1) && (side1 + side3 > side2)) {
        cout << "The numbers entered form a valid triangle";
    } else {
        cout << "The numbers entered do not form a valid triangle";
    }
    
    return 0;
}