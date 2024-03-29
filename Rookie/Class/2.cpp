#include <iostream>

using namespace std;

class Box
{
    public:
        double length;
        double breadth;
        double height;
        
        double getVolume(void);
        void setLength(double len);
        void setBreadth(double bre);
        void setHeight(double hei);
};

double Box::getVolume(void)
{
    return length * breadth * height;
}

void Box::setHeight(double hei)
{
    height = hei;
}

void Box::setBreadth(double bre)
{
    breadth = bre;
}

void Box::setLength(double len)
{
    length = len;
}

int main()
{
    Box Box1;
    Box Box2;
    double volume = 0.0;

    Box1.setLength(6.0);
    Box1.setBreadth(7.0);
    Box1.setHeight(5.0);

    Box2.setLength(12.0);
    Box2.setBreadth(13.0);
    Box2.setHeight(10.0);

    volume = Box1.getVolume();
    cout << "The volume of the Box1 is " << volume << endl;

    volume = Box2.getVolume();
    cout << "The volume of the Box2 is " << volume << endl;

    return 0;
}