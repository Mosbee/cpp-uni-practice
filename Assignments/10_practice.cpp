#include <iostream>
#include <iomanip>

using namespace std;

/*
Write a program to display the following triangles:
*
**
***
****
*
**
***
****
Input the size of the triangles from the keyboard.
*/
int main() {
    int size;
    cin >> size;
    for(int t = 0; t < 2; t++)
    {
        for(int i = 1; i <= size; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                cout << '*';
            }
            cout << endl;
        }
    }
    
    return 0;
}
