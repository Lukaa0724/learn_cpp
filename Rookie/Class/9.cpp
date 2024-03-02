#include <iostream>
using namespace std;

class MyClass
{
    public:
        int data;

        void display()
        {
            cout << "Data: " << data << endl;
        }
};

void processObject(MyClass *ptr)
{
    ptr->display();
}

int main()
{
    MyClass obj;
    obj.data = 42;

    MyClass *ptr = &obj;
    cout << "Data via pointer: " << ptr->data << endl;

    processObject(&obj);
    return 0;
}