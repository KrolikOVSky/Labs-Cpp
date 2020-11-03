#include "iostream"
using namespace std;

class Thing
{
protected:
    string name;
public:
    Thing(string name)
    {
        this->name = name;
    }

    void print()
    {
        cout << "Name of thing: " << this->name << endl;
    }
};
