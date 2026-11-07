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
friend ostream & operator<<(ostream &,complex&);
};

ostream &operator<<(ostream &out,complex &c)
{  
    out<<c.real<<" + i"<<c.imag;
    return out;
}

int main(){
    
    complex c1(3,4);
    cout<<c1;
   
    return 0;
}