#include <iosream>
using namespace std;
int main()
{
    int a,b,c,d,max=0;
    cin >>a>>b>>c>>d;
    if (a%2==0||b%2==0||c%2==0||d%2==0){
        if (a%2==0)
            max = a;
         if (b%2 == 0 && b>max)
            max = b;
         if (c%2 == 0 && c>max)
            max = c;
         if (d%2 == 0 && d>max)
            max = d;
    }
     else {
        cout <<"Not found";
    }
    cout << max;
}