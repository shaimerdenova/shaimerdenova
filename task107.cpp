#include <iostream>
using namespace std;
int main ()
{
  int sum=0;
  for(int i=10;i>0;i--){
        for (int j=i; j>0; j--){
          cout<<i<<" ";
          sum=sum+i;
      }
        cout<<endl;

  }
 cout<<sum;
      return 0;
  }