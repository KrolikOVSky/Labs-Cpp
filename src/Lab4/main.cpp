#include "iostream"
using namespace std;

class Wheel
{
protected:
    double diameter;
    int quantity;
public:
    Wheel(double diameter, int quantity)
        : diameter(diameter), quantity(quantity)
    {}

    void print()
    {
        cout << "Diameter wheel: " << diameter << endl;
        cout << "Quantity wheel: " << quantity << endl;
    }
};

class Shoes
{
protected:
    int size;
    string color;
public:
    Shoes(int size, string color)
        : size(size), color(color)
    {}

    void print()
    {
        cout << "Size: " << size << endl;
        cout << "Color: " << color << endl;
    }
};

class Rollers: public Wheel, public Shoes
{
public:
    Rollers(int size, string color, double diameter, int quantity)
        : Shoes(size, color), Wheel(diameter, quantity)
    {}

    void print()
    {
        cout << "Rollers" << endl;
        Shoes::print();
        Wheel::print();
    }
};

int main()
{
    auto rol = new Rollers(41, "red", 22.1, 3);
    rol->print();
    delete rol;
}