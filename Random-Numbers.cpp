#include <iostream>
#include <ctime>

// https://github.com/justsyntex

using namespace std;

int main()
{
    srand(time(NULL));

    int count;

    cout << "How many values do you need? " << endl;
    cin >> count;

    int a;

    for (int i = 0; i < count; i++)
    {
        a = rand();
        cout << a << endl;
    }

    system("pause");
}