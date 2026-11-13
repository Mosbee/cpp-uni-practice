#include <iostream>

using namespace std;
/*
In a magic square, the rows, columns, and diagonals all have the same sum. 
Write a program to read in a two-dimensional integer array and check if it is 
a magic square.
*/
int main() {
    int a[3][3] = {{1, 1, 1}, 
                   {1, 1, 1}, 
                   {1, 1, 1}};
    int result1 = 0, result2 = 0, result3 = 0, result4 = 0, result5 =0;
    for (int i = 0; i < 3; i++)
    {
        result1 += a[0][i];
        result2 += a[1][i];
        result3 += a[2][i];
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result4 += a[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 2; j >= 0; j--)
        {
            result5 += a[i][j];
        }
    }
    if(result1 == result2 && result2 == result3 && result4 == result5)
    cout << "It is a magic square!";
    else
    cout << "It is not a magic square!";

    return 0;
}