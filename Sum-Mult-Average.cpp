#include <iostream>

// https://github.com/justsyntex

using namespace std;


int main()
{
	int x, y, z;

	cout << "Enter three values: " << endl;
	cin >> x >> y >> z;

	cout << "\nSum: " << x + y + z << endl;
	cout << "Mult: " << x * y * z << endl;
	cout << "Average: " << (float)(x + y + z) / 3 << endl;

    system("pause");
}