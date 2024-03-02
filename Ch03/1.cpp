#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using std::string;
using std::cin;
using std::cout;
using std::endl; // using this, our code is more simple
using std::vector;


int main()
{
    vector<int> nums;
    int a;
    while(cin >> a)
    {
        nums.push_back(a);
    }
    for(auto i = 0; i < nums.size() / 2; i++)
    {
        cout << nums[i] + nums[nums.size() - 1 + i] << endl;
    }


    return 0;
}