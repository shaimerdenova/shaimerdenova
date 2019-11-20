#include <iostream>
using namespace std;
int main()
{
    int a,a1,a2,a3,a4,a5;
    cin>>a;
    a1=a/10000;
    a2=0;
    a3=a%100/10;
    a4=0;
    a5=a%1000%100%10;

    cout <<a1<<a2<<a3<<a4<<a5;
}