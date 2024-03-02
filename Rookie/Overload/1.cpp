#include <iostream>
using namespace std;

class printData
{
    public:
        void print(int i)
        {
            cout << "The value of int is " << i << endl;
        }

        void print(double f)
        {
            cout << "The value of float is" << f << endl;
        }

        void print(char c[])
        {
            cout << "The value of string is " << c << endl;
        }
};

int main()
{
    printData pd;

    pd.print(5);
    pd.print(500.263);
    char c[] = "Hello c++";
    pd.print(c);

    return 0;
}