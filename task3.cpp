#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int count = 1;
    for (int i = 0; i < 5; i++)
    {
        for(int j = 0; j < count; j++)
        cout << a ;
        cout << endl ;
        count++;
    }
    return 0;
}
