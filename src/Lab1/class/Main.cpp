//
// Created by Alex on 06.09.2020.
//

#include "Price.h"

using namespace std;

int main(){
    auto *product = new Price("Cheese", "Market1", 230);
    auto *product1 = new Price("Apple", "Market2", 500);
    auto *product2 = new Price("Cherry", "Market1", 150);

    product->print();
    product1->print();
    product2->print();

    bool res = product->Compare(product1);
    if(res)cout << "true";
    if(!res)cout << "false";

    return 0;
}
