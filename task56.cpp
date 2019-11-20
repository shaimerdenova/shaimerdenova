#include <iostream>
using namespace std;

int main()
{
    int direction, N;
    cin>>direction>> N;
    direction=direction+N;
    switch ( direction) {
case 11:
  cout<<"North";
  break;
case 12:
  cout<<"West";
  break;
case 13:
  cout<<"South";
  break;
case 14:
  cout<<"East";
  break;
}
    
    return 0;
}