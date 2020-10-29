#include "Price.cpp"

using namespace std;

int main(){
    auto *product = new Price("Cheese", "Market1", 230);
    auto *product1 = new Price("Apple", "Market2", 500);
    auto *product2 = new Price("Cherry", "Market1", 150);

    product->print();
    product1->print();
    product2->print();


    bool res = product->Compare(product1);
    if(res) cout << "true" << endl;
    if(!res) cout << "false" << endl;

    delete product;
    delete product1;
    delete product2;

    return 0;
}
