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

    MyChar &operator +=(MyChar &symbol)
    {
        cout << this->value << " change " << symbol.value << endl;
        char temp = this->value;
        this->value = symbol.value;
        symbol.value = temp;
        cout << "char, before " << temp << ", after " << this->value << endl;
        cout << "char, before " << this->value << ", after " << symbol.value << endl;
        return *this;
    }

    friend MyChar &operator--(MyChar &symbol);

    friend bool operator==(MyChar &symbol1, MyChar &symbol2);
};

MyChar &operator--(MyChar &symbol)
{
    if (symbol.operator!())
    {
        cout << symbol.value << " to lower = ";
        symbol.value = char(tolower(symbol.value));
    }
    return symbol;
}

bool operator==(MyChar &symbol1, MyChar &symbol2)
{
    cout << symbol1.value << " == " << symbol2.value << " ? ";
    return symbol1.value == symbol2.value;
}

int main()
{
    MyChar symbol('H');
    MyChar symbol1('d');
    cout << "'H' latin alphabet char? ";
    cout << boolalpha << !symbol << endl;
    --symbol;
    symbol.print();
    symbol1 += symbol;
    cout << boolalpha << (symbol == symbol1) << endl;
    return 0;
}
