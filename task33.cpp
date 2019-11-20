#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int x, y;
float x1, y1, result;
cin>>x>>y;
x1=sqrt(x);
y1=sqrt(y);
if ((x1==round(x1))&&(y1==round(y1))){
    result=sqrt(x-y1);
    if ((x-y1)<0){
        cout<<"the result is negative!!! ";
    }
    else
    {
cout<<result;
}
}
else
    cout<<"No roots";

return 0;
}
