#include <iostream>
using namespace std;

int main()
{
  // Declarations and initializations
  char s[20] = "sajid";
  char t[20] = {'s','a','j','i','d','\0'}; // only zero can also be used as string terminator
  char u[] = "sajid"; 
  char p[] = {'s','a','j','i','d',0};

  
  
  char *name = "shahid";
  
   cout<<s<<endl;
   cout<<t<<endl;
   cout<<u<<endl;
   cout<<p<<endl;
   cout<<name<<endl;

    return 0;
}