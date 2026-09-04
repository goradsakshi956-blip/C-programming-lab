#include<iostream>
using namespace std;

class fraction
{
 private:
 int num , den ;
 public:S
 fraction(int  n=0,int d=1): 
 {
 num = n;
 den = d;
 }
 
 fraction add(const fraction & f)
 {
  return fraction(num* f.den + f.num*den,den* f.den);
 }
 fraction subtract(const fraction &f)
 {
 return fraction(num* f.den - f.num*den,den* f.den);
 }
 
 void display()
 {
 cout<<num<<"/"<<den<<endl;
 }
};
int main()
{
fraction f1(2,3 ),f2(1,4);
fraction sum=f1.add(f2);
fraction diff=f1.subtract(f2);

cout<<"first fraction:";
f1.display();
cout<<"second fraction:";
f2.display();
cout<<"addition:";
sum.display();
cout<<"subtraction:";
diff.display();
}
