#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cin>>a;
    c=a/1000;
    b=a%1000/100;
    d=a%100/10;
    e=a%1000%100%10;
    if (c==b ||c==d ||c==e ||b==d ||b==e ||d==e)cout <<"Yes";
    else cout <<"No";
}
