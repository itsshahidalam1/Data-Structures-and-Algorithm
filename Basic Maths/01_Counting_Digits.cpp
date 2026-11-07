//NO leading zeros:

#include <iostream>
using namespace std;

int main(){
int n,count{0};
cin>>n;
if(n==0) cout<<1;
while(n>0){
 
    n/=10;
    count++;

}
cout<<count<<endl;
return 0;
}