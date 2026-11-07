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
    vector <int> num;
    num.push_back(5);
    num.push_back(6);
    num.push_back(1);
    num.push_back(8);

    cout<<"Max size : "<< num.max_size()<<endl;
    cout<< "Vetor is empty "<<num.empty()<<endl;
    cout<<"Size : "<<num.size()<<endl;
    cout<<"Capacity : "<<num.capacity()<<endl;
    
    
    num.reserve(10);
    
    
    cout<<"Size : "<<num.size()<<endl;
    cout<<"Capacity : "<<num.capacity()<<endl;
    cout<<"operator[] : "<<num.operator[](2)<<endl;
    vector<int> arr;
    swap(num,arr);
    cout<<num.front()<<endl;
    cout<<num.back()<<endl;
    num.insert(num.begin()+3,0);
    show(num);

}