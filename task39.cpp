#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int x, y;
cin>>x>>y;
if (x>y){
   cout<<"Yes";
}
else
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<x<<" "<<y;
}
}