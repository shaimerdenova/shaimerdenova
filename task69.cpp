#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    double Area,p;
    cin>>a>>b>>c;
    if((a+b>c)&&(a+c>b)&&(b+c>a))
    {
        p=(a+b+c)/2;
        Area=pow((p*(p-a)*(p-b)*(p-c)),0.5);
        cout<<Area;
    }
    else
    {
        cout<<"It doesn't exist";
    }
}