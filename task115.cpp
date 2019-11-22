#include <iostream>
using namespace std;
int main ()
{
    int b=10;
    int a[10][10];
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            a[i][j]=i*j;
            cout<<a[i][j]<<" ";
            if (a[i][j]<b){
                cout<<" ";
            }
        }
        cout<<endl;
    }
}