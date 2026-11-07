#include <iostream>
#include <vector>
using namespace std;

int main(){
    
   int n;
   cin>>n;
   vector<int> arr(n);
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   
   bool alice = true;
   vector <int> seq;
   
   int i = 0,j = arr.size()-1;

while(i<j){   
    
   if(alice){
       if(arr[i]<arr[j])
          seq.push_back(arr[i++]);
       else 
          seq.push_back(arr[j--]);
       
       alice = false;
   }
   
   else
   {
             if(arr[i]<arr[j])
          seq.push_back(arr[i++]);
         else 
          seq.push_back(arr[j--]);
          
          alice = true;
   }
    
    
    
    }
    
    if(!alice) cout<<"Bob";
    else cout<<"Alice";
    return 0;
}