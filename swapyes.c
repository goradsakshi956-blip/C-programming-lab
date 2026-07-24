#include<iostream>
using namespace std;
int main()
{
   int a,b,c=0;
   cout<<"enter a and b:";
   cin>>a>>b;
   c=a;
   a=b;
   b=c;
   cout<<a<<""<<b;
}
