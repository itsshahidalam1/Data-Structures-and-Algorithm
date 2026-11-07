#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <queue>
#include <typeinfo>
using namespace std;

int main()
{
    vector<int> first{1, 2, 3, 4, 5};
    vector<int> second{3, 4, 6, 7, 9};
    // vector <int> result((first.size() + second.size()));
    vector<int> result;

    cout << "{ ";
    for (int a : first)
        cout << a << " ";
    cout << "}";

    cout << endl
         << endl;

    cout << "{ ";
    for (int a : second)
        cout << a << " ";
    cout << "}";

    cout << endl
         << endl;

    // Union:
    cout << "***Set Union***" << endl;
    set_union(first.begin(), first.end(), second.begin(), second.end(), inserter(result, result.begin()));
    cout << "{ ";
    for (int a : result)
        cout << a << " ";
    cout << "}";

    cout << endl
         << endl;

    result.clear();
    cout << "***Set Intersection***" << endl;
    set_intersection(first.begin(), first.end(), second.begin(), second.end(), inserter(result, result.begin()));

    cout << "{ ";
    for (int a : result)
        cout << a << " ";
    cout << "}";

    cout << endl
         << endl;

    cout << "***set difference***" << endl;
    result.clear();
    set_difference(first.begin(), first.end(), second.begin(), second.end(), inserter(result, result.begin()));
      cout << "{ ";
    for (int a : result)
        cout << a << " ";
    cout << "}";

    cout << endl
         << endl;



    cout << "***symmetric difference***" << endl;
       result.clear();
    set_symmetric_difference(first.begin(), first.end(), second.begin(), second.end(), inserter(result, result.begin()));

       cout << "{ ";
    for (int a : result)
        cout << a << " ";
    cout << "}";

    cout << endl
         << endl;
         
    return 0;
}