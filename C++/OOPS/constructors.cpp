#include <iostream>
using namespace std;
struct rectangle
{
 
 int len;
 int bdt;
 public:
 rectangle();
 rectangle(int ,int );
 rectangle(rectangle &);
 void set_dimension(int,int);

};

int main()
{
    rectangle r;
    rectangle r2(3,4);
    rectangle r3(r2);
    cout<<r.bdt<<" ; "<<r.len<<endl;
    cout<<r2.bdt<<" ; "<<r2.len<<endl;
    cout<<r3.bdt<<" ; "<<r3.len<<endl;  
    return 0;
}


// Non-Parameterized constructor:
rectangle::rectangle()
{
  len =0;
  bdt= 0;
}


void rectangle::set_dimension(int l,int b)
{
    len=l;
    bdt=b;
}  

// Parameterized Constructor:
rectangle::rectangle(int l,int b)
{
    len = l;
    bdt = b;

}

//   copy constructor:
 rectangle::rectangle(rectangle &rect)
 {
   len = rect.len;
   bdt=rect.bdt;
    
 }