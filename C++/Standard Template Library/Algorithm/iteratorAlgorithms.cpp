#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool checkeven (int a)
{
    if(a%2)
       return true;
       else return false;
}

void printDouble(int a)
{
    cout << 2*a<< " ";
}

int main()
{
 vector<int> arr{20,30,12,8,58};
 cout<<arr.size()<<endl;

//  for each function:
        for_each(arr.begin(),arr.end(),printDouble);

//  find function: return iterator of target if found else returns iterator of end of the vector.
       vector <int>::iterator it =  find(arr.begin(),arr.end(),12);
       cout<<endl;
       cout<<*it<<endl;
// find_if function: returns iterator to the first element that satisfies a given predicate else return iterator of end.

     vector <int>::iterator it2= find_if(arr.begin(),arr.end(),checkeven);
     it2--;
     cout<<*it2<<endl;
 
     
// partition function: divides elements in a range into two groups based on a predicate.
     vector<int> arr1{21,30,11,8,59};
     vector <int>::iterator i = partition (arr1.begin(),arr1.end(),checkeven);
      
     for (auto a : arr1)
     cout<< a<<" ";
     cout<<endl;

     for(auto k = i-1;k>=arr1.begin();k--)
         cout<<*k<<" ";     cout<<endl;

     for (auto k = i;k<arr1.end();k++)
   
     cout<<*k<<" ";

     //unique(begin, end); funtion
        // Returns an iterator to the new logical end.
        // Does not actually resize the container.
        // Usually used with erase().

    return 0;
}