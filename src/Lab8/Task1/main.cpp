#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <bitset>


using namespace std;

int main ()
{
    string str;
    cin >> str;

    ofstream failOut;
    failOut.open("../src/Lab8/Task1/result.txt");
    if (!failOut)
    {
        cout << "Could not be opened fail" << endl;
        exit(1);
    }

    for (char i : str) {
        int res = i;
        failOut << showbase << i << "=" << bitset<8> (res)
             << "=" << dec << res << "=" << oct << res << endl;

        cout << showbase << i << "=" << bitset<8> (res)
                << "=" << dec << res << "=" << oct << res << endl;

    }
}
