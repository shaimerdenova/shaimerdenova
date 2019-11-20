#include <iostream>
using namespace std;

int main()
{
int d, m,y;
cin>>d>>m>>y;
if ((m<1)||(m>12)){
    cout <<"Such month doesn't exit";
    }
else if ((d<1)||(d>31)) {
    cout<<"Such day doesn't exit";
}
else if ((m==2)&&(d>28)){
    cout<<"Such date doesn't exit";
}
else if (((m==4)||(m==6)||(m==9)||(m==11)) && (d==31)){
    cout<<"Such date doesn't exit";}
    else {
cout<<"Such date exit";}
}