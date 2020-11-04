#include "iostream"
#include "cmath"

using namespace std;

class Square;

class Circle
{
private:
    double radius;
public:
    Circle(double radius)
            : radius(radius)
    {}

    double getArea()
    {
        return (3.14 * pow(this->radius, 2));
    }

    void print()
    {
        cout << "Circle" << endl;
        cout << "Radius: " << radius << endl;
        cout << "Area: " << getArea() << endl;
    }

    friend void minArea(Square &square, Circle &circle);
};

class Square
{
private:
    double length;
public:
    Square(double length)
            : length(length)
    {}

    double getArea()
    {
        return pow(this->length, 2);
    }

    void print()
    {
        cout << "Square" << endl;
        cout << "Length sides: " << length << endl;
        cout << "Area: " << getArea() << endl;
    }

    friend void minArea(Square &square, Circle &circle);
};

void minArea(Square &square, Circle &circle)
{
    cout << "Min area is ";
    if ( square.getArea() < circle.getArea())
        square.print();
    else circle.print();
}

int main()
{
    Circle circle(3.5);
    Square square(7);
    minArea(square, circle);
}