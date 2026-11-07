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
  
    // make_heap: convert a range into max heap - only arranges, does not change the type.
    for(int a: arr) cout<<a<<" ";
    cout<<endl;
    
    make_heap(arr.begin(),arr.end());

    for(int a: arr) cout<<a<<" ";
    cout<<endl;
    
   // push_heap: agr heap pehle se bana hua hai.. aur kuch push krna chahte ho push heap kro..

    cout<<"***push_heap***"<<endl;
    
    arr.push_back(100);
   
    for(int a: arr) cout<<a<<" ";
    cout<<endl;
    
    cout<<"***after push***"<<endl;

    push_heap(arr.begin(),arr.end());

    for(int a: arr) cout<<a<<" ";
    cout<<endl;
    
    cout<<"***pop_heap***"<<endl;
    pop_heap(arr.begin(),arr.end());
    arr.pop_back();
    
    cout<<"after 1st pop"<<endl;
    for(int a: arr) cout<<a<<" ";
    cout<<endl;
    
 // sort_heap: 
    cout<<"***sort heap***"<<endl<<"After sorting: "<<endl;  
    sort_heap(arr.begin(),arr.end());
    for(int a: arr) cout<<a<<" ";
    cout<<endl;

   



    return 0;
}