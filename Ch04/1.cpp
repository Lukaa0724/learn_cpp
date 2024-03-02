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
    /*vector<string> text = {"haha."," ","mamba out"};
    for(const auto &s : text)
    {
        cout << s;
        if(s.empty() || s[s.size() - 1] == '.')
        {
            cout << endl;
        }
        else cout << " ";
    }*/
    

    vector<int> ivec = {1,2,3,4,5,6,7,8,9};
    for(auto i : ivec)
    {
        cout << ((i & 0x1) ? 2 * i : i) << endl;
    }

    return 0;
}