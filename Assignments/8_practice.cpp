#include <iostream>

using namespace std;

int main() {
    /*
    Rewrite the following using a for loop:
    int i = 0, total = 0;
    while (i < 10)
    {
        cin >> n;
        total += n;
        i++;
    }
    */
    int n;
    int total = 0;
    for(int i = 0; i < 10; i++)
    {
        cin >> n;
        total += n;
    }
    return 0;
}