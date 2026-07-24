#include<iostream>
using namespace std;
int main()
{
   int a,b,c;
   cout<<"enter two number to check largest number:";
   cin>>a>>b>>c;
   if(a>b && a>c){
   cout<<"first number is largest which is:"<<a;
   }
   else if(b>a && b>c){
   cout<<"second number is largest which is:"<<b;
   }
   else
   {
   cout<<"third number is largest which is:"<<c;
   }
}
  
