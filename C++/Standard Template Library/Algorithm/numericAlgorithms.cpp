#include <iostream>
#include <vector>
// #include <algorithm>
#include <numeric>
using namespace std;

int main()
{
   cout<<"**accumulate function**"<<endl;
   vector <int> arr{3,5,23,45,2,2,7};
   int sum = 0;
   cout<< accumulate(arr.begin(),arr.end(),sum);
   cout<<endl;

   // inner_product(): 
    cout<<"**inner_product**"<<endl;
   vector <int> first{1,2};
   vector <int> second{2,2,1,1};
   cout<<inner_product(first.begin(),first.end(),second.begin(),0)<<endl;
   
   //iota() : used to fill a range with increamental values from a given intial value.
         
         cout<<"**iota function**"<<endl;
         vector <int> nums(5);
         iota(nums.begin(),nums.end(),1);
         for (int a:nums) cout<<a<<" ";
         cout<<endl;
   
    
   // partial_sum(): for finding cumulative sum.
   
    cout<<"**partial_sum**"<<endl;
    vector <int> freq(5);
    iota(freq.begin(),freq.end(),1);

    vector<int> cumFreq(freq.size());
    partial_sum(freq.begin(),freq.end(),cumFreq.begin());
         for (int a:cumFreq) cout<<a<<" ";
         cout<<endl;
     cout<<endl;
    
   return 0;
 
}