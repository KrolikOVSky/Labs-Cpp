#include "iostream"
using namespace std;

class Thing
{
public:
    virtual void print() = 0;
    virtual double getProfit() = 0;
};

class Technic : public Thing
{
protected:
    string name;
    double price;
    int quantity;
    int power;
public:
    Technic (string name, double price, int quantity, int power)
            :name(name), price(price), quantity(quantity), power(power)
    {
    }

    void print() override
    {
        cout << "Name of product: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Power: " << power << endl;
        cout << "Total price: " << getProfit() << endl;
    }

    double getProfit() override
    {
        return (this->price * this->quantity);
    }
};

class Clothes : public Thing
{
protected:
    string name;
    double price;
    int quantity;
    int size;
public:
    Clothes (string name, double price, int quantity, int size)
            :name(name), price(price), quantity(quantity), size(size)
    {
    }

    void print() override
    {
        cout << "Name of product: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Size: " << size << endl;
        cout << "Total price: " << getProfit() << endl;
    }

    double getProfit() override
    {
        return (this->price * this->quantity);
    }
};

class Buy
{
public:
    void print(Thing *thing)
    {
        thing->print();
    }
};

int main()
{
    Buy buy;
    Clothes clothes("ffff", 13.2, 4, 44);
    Technic technic("ffddd", 14, 4, 234);

    buy.print(&clothes);
    buy.print(&technic);
    return 0;
}
