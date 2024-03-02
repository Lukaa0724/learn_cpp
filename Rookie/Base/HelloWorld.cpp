#include <iostream>

using namespace std;

int main()
{
    // This is the comment.
    cout << "Hello World";

    enum color {
        red,
        green = 5,
        blue
    }c;
    c = blue;


    return 0;
}