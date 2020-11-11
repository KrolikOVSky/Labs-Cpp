#include<iostream>

using namespace std;

const int N = 3;

template<typename Y>
void changeAtoB(Y matrix[N][N], Y A, Y B)
{
    cout << "Change " << A << " to " << B << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if(matrix[i][j] == A)
                matrix[i][j] = B;
        }
    }
}

template<typename T>
void print(T A[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}

int main()
{
    int matrixInt[N][N] =
            {
                    {1,  2,  3},
                    {6,  7,  8},
                    {1, 12, 13}
            };

    double matrixDouble[N][N] =
            {
                    {3.5,  3.8,  6.9},
                    {3.4,  1.6,  4.1},
                    {61.2, 21.2, 14.1}
            };

    char matrixChar[N][N] =
            {
                    {'y', 'o', 'u'},
                    {'l', 'o', 'v'},
                    {'a', 'e', 'x'}
            };

    print(matrixChar);
    changeAtoB(matrixChar, 'a', 's');
    print(matrixChar);

    print(matrixDouble);
    changeAtoB(matrixDouble, 3.4, 11.0);
    print(matrixDouble);

    print(matrixInt);
    changeAtoB(matrixInt, 1, 33);
    print(matrixInt);
    return 0;
}

