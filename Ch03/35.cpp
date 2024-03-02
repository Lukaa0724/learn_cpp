#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;
using std::end;
using std::begin;


int main()
{
    /*int a[10] ={};
    int c = 0;
    for(auto i = 0; i < 10; i++)
    {
        a[i] = i;
    }

    for(auto i : a)
    {
        cout << i << endl;
    }*/


    /*int arr[10];
    for(int i = 0; i < 10; i++) arr[i] = i;
    int arr2[10];
    for(int i = 0; i < 10; i++) arr2[i] = arr[i];

    // vector
    vector<int> v(10);
    for(int i = 0; i != 10; i++)
    {
        v[i] = arr[i];
    }

    vector<int> v2;
    for(auto i : v2) cout << i << endl;*/
    
    
    /*const int size = 10;
    int arr[size];
    for(auto ptr = arr; ptr != arr + size; ptr++)
    {
        *ptr = 0;
    }
    for(auto it : arr) cout << it << endl;*/

    /*int arr[] = {0,1,2,3,4,5,6,7,8,9};
    vector<int> v(begin(arr),end(arr));

    for(auto i : v) cout << i << endl;*/

    /*vector<int> v{0,1,2,3,4,5,6,7,8,9};
    int arr[10];
    for(auto i = 0; i != v.size(); i++)
    {
        arr[i] = v[i];
    }

    for(auto i : arr) cout << i << "   ";
    cout << endl;*/

    
    
    return 0;
}