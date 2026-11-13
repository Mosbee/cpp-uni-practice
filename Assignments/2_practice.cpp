#include <iostream>
#include <cmath>

using namespace std;

int main() {
    //Write a program to compute (a) the volume and (b) the
    //surface area of a box with a height of 10 cm, a length of 11.5 cm
    //and a width of 2.5 cm.

    double height = 10, length = 11.5, width = 2.5;
    double volume, surfaceArea;

    volume = height * length * width;
    surfaceArea = 2 * length * height + 2 * width * length + 2 * height * width;

    cout << "The box that has the following specs: " << endl;
    cout << "Height: " << height << "cm" << endl;
    cout << "Length: " << length << "cm" << endl;
    cout << "width: " << width << "cm" << endl;

    cout << "Has volume: " << volume << "cm^3" << endl;
    cout << "And has surface area: " << surfaceArea << "cm^2" << endl;
    return 0;
}