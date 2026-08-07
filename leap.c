#include<iostream>
using namespace std;
int main()
{
   int a;
   cout<<"enter a year to check it is leap or not:";
   cin>>a;
   if(a%400==0 || a%4==0 && a%100!=0){
   cout<<"given year is leap";
   }
   else{
   cout<<"given year not is leap";
   }
}
  
