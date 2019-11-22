#include <iostream>

using namespace std;

int main() {
    int number, a;
    cin >> number;
    while (number) {
a=number % 10;
cout<<a;
number= number/ 10;}
            return 0;
    }