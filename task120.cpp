#include <iostream>

using namespace std;

int main() {
    int number, max;
    cin >> number;
    max = 0;
    while (number) {
        if (number % 10 > max) {
        max = number % 10;}
        number= number/ 10;
    }
    cout << max;
    return 0;
}

