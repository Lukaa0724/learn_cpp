#include <iostream>
#include <cctype>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;

int main()
{   
    /*string s = "some string";
    for(auto it = s.begin(); it != s.end() && !isspace(*it); it++)
    {
        *it = toupper(*it);
    }
    cout << s << endl;*/


    /*vector<int> v;
    const vector<int> cv;
    auto it1 = v.begin();
    auto it2 = cv.begin();*/

    /*vector<string> text;
    text.push_back("aaaa  a aa a aa a a aa a  a a    aaa a");
    text.push_back("");
    text.push_back("bbbb bbbbbb");

    for(auto it = text.begin(); it != text.end() && !it->empty(); it++)
    {
        for(auto &c : *it)
        {
            if(isalpha(c)) c = toupper(c);
        }
    }

    for(auto it : text)
    {
        cout << it << endl;
    }*/


    /*vector<int> nums(10, 1);
    for(auto it = nums.begin(); it != nums.end(); it++)
    {
        *it *= 2;
    }

    for(auto num : nums)
    {
        cout << num << endl;
    }*/

    /*vector<int> ivec;
    int i;
    while(cin >> i)
    {
        ivec.push_back(i);
    }

    for(auto it = ivec.begin(); it != ivec.end() - 1; it++)
    {
        cout << *it + *(it + 1) << endl;
    }

    cout << "---------------------" << endl;


    auto it1 = ivec.begin();
    auto it2 = ivec.end() - 1;
    while(it1 < it2)
    {
        cout << *it1 + *it2 << endl;
        it1++;
        it2--;
    }*/

    /*vector<unsigned> scores(11, 0);
    unsigned grade;
    while(cin >> grade)
    {
        if(grade < 100) ++*(scores.begin() + grade / 10); 
    }

    for(auto s : scores)
    {
        cout << s << endl;
    }*/

    


    return 0;
}
