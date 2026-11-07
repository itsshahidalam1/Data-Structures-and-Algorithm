#include <iostream>
int min(int a, int b)
{
return a>b?b:a;
}

int max(int a, int b)
{
return a>b?a:b;
}

int main()
{ 
    int (*fp)(int a,int b);  //declaration
    // int (*fp)(int ,int );  // declaration
    fp = max;
   
    std::cout<<(*fp)(5,10)<<std::endl;
    
    fp = min;
    
    std::cout<<(*fp)(5,10)<<std::endl;


    return 0;
} 