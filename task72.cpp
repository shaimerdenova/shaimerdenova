#include <iostream>
using namespace std;

int main()
{
   int a1,b1,a2,b2;
   int x1,y1,x2,y2;
   int S1,S2;
   cout <<"The sides of the first rectangle and Coordinates:";
   cin>>a1>>b1>>x1>>y1;
   cout <<"The sides of the second rectangle and Coordinates:";
cin>>a2>>b2>>x2>>y2;
if (a1*b1<a2*b2){
    if (x1<=x2 && x2+a2<=a1+x1 && y1<=y2 && y2+b2<=y1+b1)
    cout<< "all points of the first rectangle belong to the second";
}
else cout<<"all points of the first rectangle don't belong to the second";
    return 0;
}