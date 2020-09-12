#include "iostream"

using namespace std;

struct Price {
    string nameOfProduct;
    string nameOfMarket;
    double priceOfProduct;
};

Price fillData(Price price, string nameOfProduct, string nameOfMarket, double priceOfProduct){
    price.nameOfMarket = nameOfMarket;
    price.nameOfProduct = nameOfProduct;
    price.priceOfProduct = priceOfProduct;
    return price;
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

bool Compare(Price price1, Price price2){
    return price1.nameOfMarket == price2.nameOfMarket;
}
