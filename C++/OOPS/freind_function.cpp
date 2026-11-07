#include <iostream>
using namespace std;

class complex {
int real;
int imag;
public:
complex(int real=0,int imag=0)
{
    this->real = real;
    this->imag = imag;
}
void display()
{
    cout<<real<<" + "<<"i"<<imag<<endl;
}
friend complex operator+(complex,complex);
};

complex operator+(complex c,complex d)
{
    complex temp;
    temp.real = d.real + c.real;
    temp.imag = d.imag + c.imag;
    return temp;
}

int main()
{  
    complex c1(1,2),c2(2,3),c3;
    c1.display();
    c2.display();
    // c3 = operator+(c1,c2);
    c3 = c1 + c2;
    c3.display();
        return 0;
}