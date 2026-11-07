#include  <iostream>
#include <vector>
using namespace std;
void show(vector<int> &arr )
{
  for(auto i = arr.begin();i<arr.end();i++)
     cout<<*i;

};

int main()
{
   vector <int> marks(5,10);
    show(marks);

}