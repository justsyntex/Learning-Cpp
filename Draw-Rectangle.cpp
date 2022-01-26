#include <iostream>

// https://github.com/justsyntex

using namespace std;


int main()
{
	int w, h;

	cout << "Write the width: ";
	cin >> w;

	cout << "Write the height: ";
	cin >> h;

    cout << endl;

	for (int j = 0; j < h; j++)
	{
		for (int i = 0; i < w; i++)
		{
			cout << "*";
		}
		cout << endl;
	}

    system("pause");
}