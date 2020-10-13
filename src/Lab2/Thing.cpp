#include "iostream"
using namespace std;


class Thing{
    string name;
public:
    explicit Thing(string name){
        this->name = name;
    }
    ~Thing();

    void print(){
        cout << "Name of thing: " << this->name << endl;
    }


};
