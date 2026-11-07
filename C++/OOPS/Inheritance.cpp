#include <iostream>
using namespace std;
class rectangles 
{
public:
 int len;
 int bred;
 public:
 void setdim(int a,int b)
 { len = a;bred = b;}

};

class cuboid :public rectangles
{
    int height;
    public:
    void set(int a,int b,int h)
    {height = h;len=a;bred = b;}

};

int main()
{
   cuboid c;
   c.set(1,2,3);
    cout << c.bred<<c.len;
   return 0;
}