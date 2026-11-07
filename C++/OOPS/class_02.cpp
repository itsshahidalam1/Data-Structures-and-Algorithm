// Pointer to object:

#include <iostream>
using namespace std;
class rectangle
{ public:
  int len;
  int breadth;
  int area()
  {
   return len*breadth;
  }
};

int main()
{
   rectangle *r1 = new rectangle;
   r1->len=3;
   r1->breadth=4;
   int area=r1->area();
   cout<<area;
    return 0;
}