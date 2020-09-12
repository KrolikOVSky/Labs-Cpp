//
// Created by Alex on 11.09.2020.
//
#include "iostream"
#include "Price.h"

using namespace std;

int main() {
    Price product1, product2, product3;
    fillData(product1, "Cheese", "Market1", 230);
    fillData(product2, "Apple", "Market2", 500);
    fillData(product3, "Cherry", "Market1", 150);

    print(product1);
    print(product2);
    print(product3);

    cout << "Compare of 2 products: " << Compare(product1, product2);
    /*cout << "\t\t\tFirst product\n";
    inputData(product1);

    cout << "\t\t\tSecond product\n";
    inputData(product2);

    cout << "\t\t\tThird product\n";
    inputData(product3);*/



    return 0;
}