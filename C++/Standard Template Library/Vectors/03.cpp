#include <iostream>
#include <vector>
using namespace std;

int main()
{   // 2D array initialization
          // vector <vector <int>> arr(2,vector<int>(2,0)) ;
          // for(int i=0; i<2;i++)
          // {
          //   for(int j=0; j<2;j++)
    
          //        {
          //           cout<<arr[i][j];
          //        }
          //    cout<<endl;
          // }


   // 2D array with rows of different sizes:
      vector <vector <int>> arr(3);
      arr[0]=vector<int>(3);
      arr[1]=vector<int>(2);
      arr[2]=vector<int>(5);

      cout<<arr.size()<<endl;
      cout<<arr[0].size()<<endl;
      cout<<arr[1].size()<<endl;
      cout<<arr[2].size()<<endl;

    return 0;
}