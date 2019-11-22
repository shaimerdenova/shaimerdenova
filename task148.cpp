#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        int a = int(s[i])-48;
        if(a==0)
        {
            cout<<"dg";
        }
        else if(a==1)
        {
            cout<<"gfv";
        }
        else if(a==2)
        {
            cout<<"cfv";
        }
        else if(a==3)
        {
            cout<<"bgd";
        }
        else if(a==4)
        {
            cout<<"dvc";
        }
        else if(a==5)
        {
            cout<<"jsv";
        }
        else if(a==6)
        {
            cout<<"xvc";
        }
        else if(a==7)
        {
            cout<<"xvd";
        }
        else if(a==8)
        {
            cout<<"cvf";
        }
        else if(a==9)
        {
            cout<<"dvx";
        }
    }
}
