#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

bool internalComparator(pair<int,int> a, pair<int,int> b){
      if(a.second < b.second) return true;
      else if(a.second = b.second) 
        {
            if(a.first<b.first) return true;
            return false;
        }
      return false;
}



int main(){
pair<int,int> arr [] = {{2,2},{1,2},{3,4},{4,1},{3,1},{5,0},{5,3}};
// sort the array according to the second number :
    sort(arr,arr + 7,internalComparator);
    for(auto a:arr) cout<<a.first<<" : "<<a.second << " ,";
    cout<<endl;
} 