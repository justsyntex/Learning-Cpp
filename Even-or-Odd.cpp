#include <iostream>

// https://github.com/justsyntex

using namespace std;


int main()
{
	int x;

	cout << "Write the value: ";
	cin >> x;

	if (x % 2 == 0)
		cout << "\nEven\n\n";
	else
		cout << "\nOdd\n\n";

    system("pause");
}