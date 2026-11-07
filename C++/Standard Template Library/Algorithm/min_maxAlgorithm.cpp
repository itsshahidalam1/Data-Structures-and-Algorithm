#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <queue>
#include <typeinfo>
using namespace std;

int main()
{
    vector <int> arr(6);
    arr.at(0)=10;
    arr.at(1)=40;
    arr.at(2)=25;
    arr.at(3)=30;
    arr.at(4)=90;
    arr.at(5)=75;

   //min and max funtion: 
   cout<<"*** Min and Max function ***"<<endl;
   int a,b;
   a = 2; b=8;
   cout<< min(a,b)<<endl;
   cout<< max(a,b)<<endl;
   
   //min_element and max_elements: return iterator to min and max elements in a given range.
   cout<<"*** Min_element and Max_elements ***"<<endl;
   cout<<*max_element(arr.begin(),arr.end())<<endl;
   cout<<*min_element(arr.begin(),arr.end())<<endl;

    return 0;
}