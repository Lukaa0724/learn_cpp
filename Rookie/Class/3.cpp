#include <iostream>
using namespace std;
class Shape
{
    public:
        void setWidth(int w)
        {
            width = w;
        }
        void setHeight(int h)
        {
            height = h;
        }
    protected:
        int width;
        int height;
};

//derived
class Rectangle: public Shape
{
    public:
        int getArea(void)
        {
            return width * height;
        }
};

int main()
{
    Rectangle Rect;

    Rect.setHeight(5);
    Rect.setWidth(7);

    cout << "Total area : " << Rect.getArea() << endl;

    return 0;
}