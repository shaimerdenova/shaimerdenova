#include <iostream>
#include <ctime>
using namespace std;
int main()
{  
   time_t now = time(0);
   tm *ltm = localtime(&now);  
   switch (ltm->tm_wday){
       case 1:
       cout<<"Monday";
       break;
       case 2:
       cout<<"Tuesday";
       break;
       case 3:
       cout<<"Wednesday";
       break;
       case 4:
       cout<<"Thursday"; 
       break;
       case 5:
       cout<<"Friday";
       break;
       case 6:
       cout<<"Saturday";
       break;
       case 7:
       cout<<"Sunday";
       break;
   }
   cout<<endl;
      switch (ltm->tm_mon){
       case 0:
       cout<<"January";
       break;
       case 1:
       cout<<"February";
       break;
       case 2:
       cout<<"March";
       break;
       case 3:
       cout<<"April"; 
       break;
       case 4:
       cout<<"May";
       break;
       case 5:
       cout<<"June";
       break;
       case 6:
       cout<<"July";
       break;
          case 7:
       cout<<"August";
       break;
       case 8:
       cout<<"September";
       break;
       case 9:
       cout<<"October";
       break;
       case 10:
       cout<<"November"; 
       break;
       case 11:
       cout<<"December";
       break;
   }
   cout<<endl;
   cout<< "Tolganay";
}