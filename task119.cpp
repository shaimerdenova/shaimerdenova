#include <bits/stdc++.h>
using namespace std;

int main()
{
int a,b,c;
for (int i=100;i<1000;i++){
a=i/100%10;
b=i/10%10;
c=i%10;
if(a+b+c==15){
    cout<<i<<" ";
}}
return 0;
}