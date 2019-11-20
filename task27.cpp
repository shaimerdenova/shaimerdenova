#include <iostream>
using namespace std;
int main()
{
int a, b, c;
cin>>a>>b>>c;
int d, e;
d=a;
e=b;
a=a+b;
b=c-d;
c=d+e+c;
cout<<a<<" "<<b<<" "<<c;
}