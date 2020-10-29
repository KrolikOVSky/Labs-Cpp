#include "iostream"

using namespace std;

struct Price{
    string nameOfProduct;
    string nameOfMarket;
    double priceOfProduct;

    void fillData(string nameOfProduct, string nameOfMarket, double priceOfProduct)
    {
        this->nameOfMarket = nameOfMarket;
        this->nameOfProduct = nameOfProduct;
        this->priceOfProduct = priceOfProduct;
    }

    Price inputData(Price price)
    {
        cout << "Enter name of product: ";
        cin >> price.nameOfProduct;

        cout << "Enter name of market: ";
        cin >> price.nameOfMarket;

        cout << "Enter price of product: ";
        cin >> price.priceOfProduct;

        return price;
    }

    void print()
    {
        cout << "Product = " << this->nameOfProduct << endl;
        cout << "Market = " << this->nameOfMarket << endl;
        cout << "Price = " << this->priceOfProduct << "\n\n";
    }

    void Compare(Price price)
    {
        string res;
        if(this->nameOfMarket == price.nameOfMarket) cout << " you can buy at the same market" << endl;
        else cout << " you can\'t buy at the same market " << endl;
    }
};


