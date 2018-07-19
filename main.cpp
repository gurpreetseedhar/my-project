#include <iostream>

using namespace std;
class complex
{
   int real,img;
   public:
       void set()
       {
           cout<<"enter real and img part:";
           cin>>real>>img;
       }
       friend complex sum(complex,complex);
       void display();
};
void complex::display()
{
    cout<<"sum of complex no:"<<real<<"+"<<img<<"i",,;
}
complex sum(complex a,complex b)
{
    complex t;
    t.real=a.real+b.real;
    t.img=a.img+b.img;
    return t;
}
int main()
{
    complex a,b,c;
    a.set();
    b.set();
    c=sum(a,b);
    c.display();
    return 0;
}
