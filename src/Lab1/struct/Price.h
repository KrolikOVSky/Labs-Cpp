#include "iostream"

using namespace std;

struct Price {
    string nameOfProduct;
    string nameOfMarket;
    double priceOfProduct;
};

Price fillData(string nameOfProduct, string nameOfMarket, double priceOfProduct) {
    Price price;
    price.nameOfMarket = nameOfMarket;
    price.nameOfProduct = nameOfProduct;
    price.priceOfProduct = priceOfProduct;
    return price;
}

void fillData(Price price, string nameOfProduct, string nameOfMarket, double priceOfProduct) {
    price.nameOfMarket = nameOfMarket;
    price.nameOfProduct = nameOfProduct;
    price.priceOfProduct = priceOfProduct;
}

Price inputData(Price price) {
    cout << "Enter name of product: ";
    cin >> price.nameOfProduct;

    cout << "Enter name of market: ";
    cin >> price.nameOfMarket;

    cout << "Enter price of product: ";
    cin >> price.priceOfProduct;

    return price;
}

void print(Price price) {
    cout << "Product = " << price.nameOfProduct << endl;
    cout << "Market = " << price.nameOfMarket << endl;
    cout << "Price = " << price.priceOfProduct << "\n\n";
}

string Compare(Price price1, Price price2) {
    string res;
    if(price1.nameOfMarket == price2.nameOfMarket) res = " you can buy at the same market";
    else res = " you can\'t buy at the same market ";
    return res;
}
