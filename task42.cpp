#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int x;
cin>>x;
if ((x>=2)&&(x<=5)){
   x=x+10;
    cout<<x;
}
else
if ((x>=7)&&(x<=40)){
    x=x-100;
    cout<<x;
}
else
if((x<0)||(x>3000)){
    x=x*3;
    cout<<x;
}
else
       cout<<0;
    return 0;
}

