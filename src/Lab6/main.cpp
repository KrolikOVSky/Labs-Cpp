#include "iostream"

using namespace std;

class MyChar
{
private:
    char value;
public:
    MyChar(char val)
    {
        this->value = val;
    }

    void print()
    {
        cout << value << endl;
    }

    bool operator!()
    {
        return (isalpha(value));
    }



    friend MyChar& operator --(MyChar& myInt);
};

MyChar& operator --(MyChar& myInt)
{
    if (myInt.operator!())
    {
        myInt.value = char(tolower(myInt.value));
    }
    return myInt;
}

int main()
{
    MyChar myInt('?');
    cout << !myInt << endl;
    MyChar myInt2 = --myInt;
    myInt.print();
//    MyChar myInt1 = myInt + 7;
//    myInt.print();
//    cout << (myInt == myInt2) << endl;
    return 0;
}
