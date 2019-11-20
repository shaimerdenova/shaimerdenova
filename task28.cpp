#include <iostream>
using namespace std;
int main()
{
int amount, percent;
cin>>amount>>percent;
int total;
//total=5*(amount/percent)+amount;
total=5*(amount*percent/100)+amount;
cout<<total;
}
