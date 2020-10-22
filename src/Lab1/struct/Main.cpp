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

    cout << product1.nameOfProduct << " and " << product2.nameOfProduct << Compare(product1, product2) << endl;
    cout << product1.nameOfProduct << " and " << product3.nameOfProduct << Compare(product1, product3) << endl;
    cout << product2.nameOfProduct << " and " << product3.nameOfProduct << Compare(product2, product3) << endl;
    return 0;
}