1.
#include <iostream>
using namespace std;
int main()
{
  cout<<"Silence is golden";
return 0;
}
2.
#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    time_t tt;
    struct tm * ti;
    time (&tt);
    ti = localtime(&tt);

    cout << "Current Day, Date and Time is = "
         << asctime(ti)<<"Tolganay";

  return 0;
}
3.
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

4.
#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 8; j++){
        cout << "A";
    }
    cout<<endl;
    }
    return 0;
}
5.
#include <iostream>
using namespace std;

int main()
{
cout<<"*     *     *"<< endl;
cout<<" *   * *   * "<<endl;
cout<<"  * *   * *  "<<endl;
cout<<"   *     *   "<<endl;
    return 0;
}
6.
#include <iostream>
using namespace std;
int main()
{
       cout<<1+2-4;

    return 0;
}

7.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{double a;
a=1/4+1/2;
cout<<a;
    return 0;
}
8.
#include <iostream>
using namespace std;

int main()
{ int a=2;
 int b=3;
       cout<<(a+4*b)*(a-3*b)+a*a;

    return 0;
}
9.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{ int a;
cin>>a;
if (a<0)cout<<(a*(-1))+pow(a,5);
else cout<<a+pow(a,5);
    return 0;
}

10.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{ double  a;
double b;
cin>>a>>b;
cout<<pow(a+1,2)+3*(a+1)<<endl;
cout<<pow(b+1,2)+3*(b+1);
    return 0;
}
11.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{ double  x;
cin>>x;
if(x<0) cout<<((x-5)*(-1)-sin(x))/3+sqrt(x*x+2014)*cos(2*x)-3;
else cout<<((x-5)-sin(x))/3+sqrt(x*x+2014)*cos(2*x)-3;

    return 0;
}
12.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{ double  x;
double e =2.71828182846;
cin>>x;
if(x<0) cout<<pow(e,x-2)+(-1)*(sin(x))-pow(x,4)*cos(1/x);
else cout<<pow(e,x-2)+(sin(x))-pow(x,4)*cos(1/x);

    return 0;
}
13.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{ double  x;
double a,b;
cin>>a>>b>>x;
cout<<pow(x*x+b,1/5)-(b*b*pow(sin(x+a),3))/x ;


    return 0;
}

14.
#include <iostream>
using namespace std;

int main()
{int a,b;
cin>>a>>b;
cout<<a*b<<endl;
cout<<a+b;
    return 0;
}
15.
#include <iostream>
using namespace std;

int main()
{int a;
cin>>a;
cout<<a*a<<endl;
cout<<a*a*a;
    return 0;
}

16.
#include <iostream>
using namespace std;

int main()
{int a,b,c;
cin>>a>>b>>c;
a=a*2;
b=b-3;
c=c*c;
cout<<a<<" "<<b<<" "<<c<<" "<<a+b+c<<endl;
    return 0;
}
17.
#include <iostream>
using namespace std;

int main()
{double a,b,c;
cin>>a>>b>>c;

cout<<(a+b+c)/3<<" "<<2*(a+c)-3*b;
    return 0;
}
 18.
#include <iostream>
using namespace std;

int main()
{int  a,S,P;
cin>>a;
S=a*a;
P=4*a;
cout<<S<<endl<<P;
    return 0;
}
19.
#include <iostream>
using namespace std;

int main()
{ double candy, cookie;
    int  a,b;
    cin>>candy>>cookie;
    a=candy*0.3+cookie*0.4;
    b= 3*(candy*1.8+2*cookie);
cout<<a<<endl<<b;

    return 0;
}
20.
#include <iostream>
using namespace std;

int main()
{ double t,s,u;
    cin>>t>>s;
    t=t*60;
    s=s*1000;
    u=s/t;
cout<<u;

    return 0;
}
21.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{ double a,b,c,S,P;
cin>>a>>b;
c=sqrt(a*a+b*b);
S=a*b/2;
P=a+b+c;
   cout<<S<<" "<<P<<" "<<c;

    return 0;
}
22.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{ double C,F;
cin>>C;
F=C*9/5+32;
cout<<F;
    return 0;
}
23.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int x, a, y;
float k;
cin>>x>>a>>y>>k;
y=y*a/x;
k=k/(a/x);
cout<<y<<"rublei"<<" "<<k<<"kg";
}
24.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{ double day,discount,money;
cin>>day>>discount>>money;
for(int i=1;i<=day;i++){
    money=money+3;
    }
    money=money*(discount/100)+money;
cout<<money;
    return 0;
}

25. #include <iostream>
using namespace std;
int main()
{
int w, m, y;
cin>>w>>m>>y;
int total;
total=w*7+m*30+y*365;
cout<< total;
}

26. #include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin >>a>>b;
    c=a;
    a=b;
    b=c;
    cout <<a<<" "<<c;
}


27. #include <iostream>
using namespace std;
int main()
{
int a, b, c;
cin>>a>>b>>c;
int d, e;
d=a;
e=b;
a=a+b;
b=c-d;
c=d+e+c;
cout<<a<<" "<<b<<" "<<c;
}

28. #include <iostream>
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


29. #include <iostream>
using namespace std;
int main()
{
int a, b;
cin>> a>> b;
a=a+b;
b=a-b;
a=a-b;
cout<<a<<" "<<b;
}

30. #include <iostream>
using namespace std;
int main()
{
int a;
cin>> a;
int total1, total2, total;
/*total=a*a;
total=total*total;*/
/*total=a*a*a;
total=total*total;*/
total1=a*a*a;
total2=total1*total1;
total=total2*total2*total1;
cout<<total;
}


31. #include <iostream>
using namespace std;
int main()
{
int S, a, total;
S=647*170;
a=30;
total=S/a/a;
cout<<total;
}

32. #include <iostream>
using namespace std;
int main()
{
int b, a, x;
cin>>a;
b=a%100;
a=a/100;
x=b*10+a;
cout<<x;
}
33. #include <iostream>
#include <cmath>
using namespace std;
int main()
{
int x, y;
float x1, y1, result;
cin>>x>>y;
x1=sqrt(x);
y1=sqrt(y);
if ((x1==round(x1))&&(y1==round(y1))){
    result=sqrt(x-y1);
    if ((x-y1)<0){
        cout<<"the result is negative!!! ";
    }
    else
    {
cout<<result;
}
}
else
    cout<<"No roots";

return 0;
}

34. #include <iostream>
using namespace std;
int main()
{
    int a;
    cin >>a;
    if (a>3)
a=a+10;
    else
a=a-10;
    cout << a;
}
35. #include <iostream>
using namespace std;
int main()
{
    int a;
    cin >>a;
    if (a<7)
    cout<<"Yes";
    if (a>10)
    cout <<"no";
    if (a==9)
    cout <<"error";
}
36. #include <iostream>
using namespace std;
int main()
{
    int a;
    cin >>a;
    if (a==1)
    cout <<"January";
   if (a==2)
    cout <<"February";
    if (a==3)
    cout <<"March";
    if (a==4)
    cout <<"April";
    if (a==5)
    cout <<"May";
    if (a==6)
    cout <<"June";
    if (a==7)
    cout <<"July";
    if (a==8)
    cout <<"August";
    if (a==9)
    cout <<"September";
    if (a==10)
    cout <<"October";
    if (a==11)
    cout <<"November";
    if (a==12)
    cout <<"December";
}
37. #include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin >>a>>b;
    if (a>b)
    cout <<a;
    if (b>a)
    cout <<b;
}
38. #include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin >>a>>b;
    if (a-b==100||b-a==100||a-b==-100||b-a==-100)
   cout<<"Yes";
    else {
cout <<"no";
}
}

39. #include <iostream>
#include <cmath>
using namespace std;
int main()
{
int x, y;
cin>>x>>y;
if (x>y){
   cout<<"Yes";
}
else
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<x<<" "<<y;
}
}


40. #include <iostream>
using namespace std;
int main()
{
    int a;
    cin >>a;
    if (a>-10||a<10)
    a=a+5;
    else
a=a-10;
    cout<< a;
}
41. #include <iostream>
using namespace std;
int main()
{
    int a;
    cin >>a;
    if (a>100||a<-100)
    a=0;
    else
a=a+1;
    cout<< a;
}

42. #include <iostream>
#include <cmath>
using namespace std;
int main()
{
int x;
cin>>x;
if ((x>=2)&&(x<=5)){
   x=x+10;
    cout<<x;
}
else
if ((x>=7)&&(x<=40)){
    x=x-100;
    cout<<x;
}
else
if((x<0)||(x>3000)){
    x=x*3;
    cout<<x;
}
else
       cout<<0;
    return 0;
}

43. #include <iostream>
#include <cmath>
using namespace std;
int main()
{
int m;
cin>>m;
switch (m){
case 1:
    cout<< "Winter";
    break;

case 2:
    cout<< "Winter";
    break;

case 3:
    cout<< "Spring";
    break;

case 4:
    cout<< "Spring";
    break;

case 5:
    cout<< "Spring";
    break;

case 6:
    cout<< "Summer";
    break;

case 7:
    cout<< "Summer";
    break;

case 8:
    cout<< "Summer";
    break;

case 9:
    cout<< "Autumn";
    break;

case 10:
    cout<< "Autumn";
    break;

case 11:
    cout<< "Autumn";
    break;

case 12:
    cout<< "Winter";
    break;
default:
    cout<<"Such month doesn't exit!";
    }
}


44. #include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a, b;
cin>>a>>b;
if ((a!=10)&&(b!=10)){
    if (a%2==0){
        int sum;
    sum=a+b;
        cout<<sum;
    }
else {
    int product;
    product=a*b;
    cout<<product;
}
}
    }

45. #include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a, b, c;
cin>>a>>b>>c;
if ((a>10)&&(b>10)&&(c>10)){
    if ((a%3==0)&&(b%3==0)){
        cout<<"yes";
    }
    else
        cout<<"no";
}
else
    cout<<"no";
}

46. #include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin >>a>>b>>c;
    if ((a%5==0) && (b%5==0) && (c%5==0))
    cout << a+b+c;
    else
    if ((a%5==0) && (b%5==0))
    cout <<a+b;
    else
    if ((b%5==0) && (c%5==0))
    cout <<b+c;
    else
   if ((a%5==0) && (c%5==0))
    cout <<a+c;
    else
   if (a%5==0)
   cout <<a;
    else
   if (b%5==0)
 cout <<b;
    else if (c%5==0)
 cout <<c;
    else if ((a%5!=0) && (b%5!=0) && (c%5!=0))
    cout <<"error";
}
47. #include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin >>a>>b>>c;
    if ((a>b) && (a>c))
    cout << a;
    else
 if ((b>c) && (b>a))
cout << b;
    else
if ((c>a) && (c>b))
cout << c;
}
48. #include <iostream>
using namespace std;
int main()
{
    int a,b,c, max=0;
    cin >>a>>b>>c;
    if (a+b>max)
max = a+b;
    if (a+c>max)
max = a+c;
    if (c+b>max)
max = c+b;
    if (max==a+b)
cout << a<<" "<<b;
    if (max==a+c)
cout << a<<" "<<c;
    if (max==c+b)
cout << c<<" "<<b;
}
49. #include <iosream>
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
50.
 #include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin >>a>>b>>c;
    if (a==b||a==c||b==c){
        cout << "Yes";
    }
}

