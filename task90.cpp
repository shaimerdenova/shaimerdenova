#include <bits/stdc++.h>
using namespace std;

int main()
{
    double sum=0;
    for(double i=3;i<=111;i+=2)
    {
        sum=sum+cos(i/(i+2));
    }
    cout<<sum;
}