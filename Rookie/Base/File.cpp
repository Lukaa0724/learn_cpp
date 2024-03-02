#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string str1 = "foo, bar!";
    ofstream fout("out.txt");

    // fout << str1 << endl;

    ifstream fin("out.txt");
    string str2, str3;
    fin >> str2 >> str3;
    cout << str2 << endl << str3;
    return 0;
}