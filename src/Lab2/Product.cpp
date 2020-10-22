#include "iostream"
#include "Thing.cpp"
using namespace std;


class Product : public Thing
{
protected:
    double price;
    int quantity;
public:
    Product (string name, double price, int quantity)
            :Thing(name), price(price), quantity(quantity)
    {
    }

    void print()
    {
        cout << "Name of product: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total price: " << getProfit() << endl;
    }

    double getProfit()
    {
        return (this->price * this->quantity);
    }
};