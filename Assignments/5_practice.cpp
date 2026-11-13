#include <iostream>

using namespace std;

int main() {

    /*Write a program to accept a temperature in degrees Fahrenheit and convert
    it to degrees Celsius. Your program should display the following 
    prompt:Enter a temperature in degrees Fahrenheit:You will then enter a 
    decimal number followed by the Enter key. The program will then convert 
    the temperature by using the formulaCelsius = (Fahrenheit - 32.0) * 
    (5.0/9.0)Your program should then display the temperature:The temperature 
    in degrees Celsius is:*/

    double Ctemp;
    double Ftemp;
    cout << "Enter a temperature in degrees Fahrenheit: ";
    cin >> Ftemp;
    Ctemp = (Ftemp - 32.0) * 5 / 9.0;
    cout << "The temperature in degrees Celsius is: " << Ctemp;


    return 0;
}