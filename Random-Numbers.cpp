#include <iostream>
#include <ctime>

// https://github.com/justsyntex

using namespace std;

int main()
{
    srand(time(NULL));

    const short SIZE = 10;
    short a[SIZE];

    for (short i = 0; i < SIZE; i++)
    {
        a[i] = rand() % 20;

        for (short t = 0; t < i; t++)
        {
            if (a[i] == a[t])
            {
                i--;
                break;
            }
        }
    }

    for (short i = 0; i < SIZE; i++)
    {
        cout << a[i] << endl;
    }

    system("pause");
}