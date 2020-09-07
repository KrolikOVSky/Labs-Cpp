#include <iostream>
#include <utility>

using namespace std;

class Price {
    string nameOfProduct;
    string nameOfMarket;
    int priceOfProduct;
public:
    Price(string nameOfProduct, string nameOfMarket, int priceOfProduct){
        this->nameOfProduct = nameOfProduct;
        this->nameOfMarket = nameOfMarket;
        this->priceOfProduct = priceOfProduct;
    }

        string get_nameOfProduct(){return nameOfProduct;}
        string get_nameOfMarket(){return nameOfMarket;}
        int get_priceOfProduct(){return priceOfProduct;}



    void print(){
        cout << "Product = " << get_nameOfProduct() << endl;
        cout << "Market = " << get_nameOfMarket() << endl;
        cout << "Price = " << get_priceOfProduct() << endl;
    }
};
