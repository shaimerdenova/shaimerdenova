#include <iostream>
using namespace std;

int main()
{
int a,b,c;
for (int i=100;i<1000;i++){
a=i/100%10;
b=i/10%10;
c=i%10;
if(i==pow(a,3)+pow(b,3)+pow(c,3)){
    cout<<i<<" ";
}}
return 0;
}