#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    m=2*n;
    for (int j=0; j<n; j++){
    for(int i=0; i<m; i++){
            if ((j==0)||(j==n-1)|| (i==0)||(i==m-1)){
    cout<<"A";}
    else
        cout<<"B";}
    cout<<endl;
    }
}