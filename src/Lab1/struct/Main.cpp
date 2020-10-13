//
// Created by Alex on 11.09.2020.
//
#include "iostream"
#include "Price.cpp"

using namespace std;

int main() {
    Price product1, product2, product3;
    product1 = fillData("Cheese", "Market1", 230);
    product2 = fillData("Apple", "Market2", 500);
    product3 = fillData( "Cherry", "Market1", 150);

    print(product1);
    print(product2);
    print(product3);

//    cout << "Comparing markets of products: " << product1.nameOfProduct << " and " << product2.nameOfProduct << " " << Compare(product1, product2);
    cout << product1.nameOfProduct << " and " << product2.nameOfProduct << Compare(product1, product2) << endl;
    cout << product1.nameOfProduct << " and " << product3.nameOfProduct << Compare(product1, product3) << endl;
    cout << product2.nameOfProduct << " and " << product3.nameOfProduct << Compare(product2, product3) << endl;

/*cout << "\t\t\tFirst product\n";
    inputData(product1);

    cout << "\t\t\tSecond product\n";
    inputData(product2);

    cout << "\t\t\tThird product\n";
    inputData(product3);*/



    return 0;
}