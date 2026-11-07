    #include  <iostream>
     using namespace std;

    class base 
    {
      int a;
      public:
      base (){cout<<"default constructor of base"<<endl;}
      base (int x){cout<<"parameterized constructor of base"<<endl;}
     
    };

    class derived:public base{
       public:
       derived(){cout<<"default constructor of derived"<<endl;}
       derived(int x){cout<<"parameterized constructor of derived"<<endl;}
       derived(int x,int a):base(x)
       {cout<<"parameterized constructor of derived"<<endl;}

      
    };


     int main()
     {
       derived d(4);
       derived d1(3,5);
        return 0;
     }