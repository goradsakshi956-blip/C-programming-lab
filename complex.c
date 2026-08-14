#include<iostream>
using namespace std;

class complex
{
   public:
   float real;
    float imag;
    void input()
    {
    cin>>real>>imag;
    }
    void add(complex c1, complex c2)
    {
    real= c1.real+c2.real;
    imag= c1.imag+c2.imag;
    }
    void sub(complex c1, complex c2)
    {
    real= c1.real-c2.real;
    imag= c1.imag-c2.imag;
    }
    
    void display()
    {
    cout<<real<<"+"<<imag<<"i";
    }
};

int main()
{ 
 complex c1,c2 ,addition,substraction;
 cout<<"enter the first real number: ";
 cin>>c1.real;
  cout<<"enter the first imaginary number: ";
 cin>>c1.imag;
  cout<<"enter the second real number: ";
 cin>>c2.real;
  cout<<"enter the second imaginary number: ";
 cin>>c2.imag;
 
 addition.add(c1,c2);
 substraction.sub(c1,c2);
 cout<<"addition =";
 addition.display();
 cout<<"substraction=";
 substraction.display();
 }
