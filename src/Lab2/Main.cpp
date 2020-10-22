#include "iostream"
#include "Product.cpp"

using namespace std;

int main(){
    Thing th("thing");
    th.print();
    Product product("socks", 1.2, 5);
    product.print();
    return 0;
}