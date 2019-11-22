#include <iostream>

using namespace std;

int main() {
    int number, count=0;
    cin >> number;
    while (number) {
        if (number % 10 %2==0) {
        count ++;
        }
        number= number/ 10;
    }
    cout << count;
    return 0;
}