#include <iostream>
#include <cmath>

using namespace std;

void function(double x)
{
    if ((x <= 0) || (x == M_PI))
    {
        throw x;
    }
    double y = sqrt(pow(x, 3))/ tan(x);
    cout << "Answer: " << y << endl;
}

int main()
{
    try
    {
        function(3.23);
        function(M_PI);
    }
    catch (const double ex)
    {
        cerr << "Your x = " << ex << ", not include RAV" << endl;;
    }
}
