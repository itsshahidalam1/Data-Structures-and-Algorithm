#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str;
//   str = "hello";
//   cout<<str.length()<<" : "<<str<<endl;
  
//   str = "hello world!!";
//   cout<<str.length()<<" : "<<str;

// user input
// cout<<"Enter string : ";
//  cin>>str;
//  cout<<str.length()<<" : "<<str<<endl;
 
//  cin>>str;;
//  cout<<str.length()<<" : "<<str<<endl;

 cout<<"Enter string : ";
 getline(cin,str);
 cout<<str.length()<<" : "<<str<<endl;
 
 cout<<"Enter string again : ";
  getline(cin,str);
 
 cout<<str.length()<<" : "<<str<<endl;

    return 0;
}