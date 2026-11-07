#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <numeric>
int main()
{
vector <int> nums(5);
iota(nums.begin(),nums.end(),30);
// binary_search: return true (1) iff key is present else returns false(0);
cout<<binary_search(nums.begin(),nums.end(),30)<<endl;
cout<<binary_search(nums.begin(),nums.end(),36)<<endl;

// lower_bound(): returns iterator to the first element greater than or equals to a given element in a sorted range.

cout<<"*** Lower Bound funtion ***"<<endl;
cout<<*lower_bound(nums.begin(),nums.end(),33.5)<<endl;

// upper_bound():always returns iterator to the first element greater than a given element in a sorted range.

cout<<"*** upper Bound funtion ***"<<endl;
cout<<*upper_bound(nums.begin(),nums.end(),33)<<endl;

// equal_range(): return pair (iterator to the first occrance, iterator to last occuracne) of a given number in a sorted range.
cout<<"*** equal range funtion ***"<<endl;
vector<int> arr(6);
arr.at(0)=1;
arr.at(1)=2;
arr.at(2)=2;
arr.at(3)=2;
arr.at(4)=3;
arr.at(5)=3;

pair <vector<int>::iterator,vector<int>::iterator> range;
range = equal_range(arr.begin(),arr.end(),2);
auto it = range.first;
while(it!=range.second)
      cout<<*it++<<" ";




return 0;
}