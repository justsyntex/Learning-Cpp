#include <iostream>
#include <cstdio>

using namespace std;

int step_function(int x = 1)
{
	int result = 0;
	if (x < 0)
	{
		result = -1;
	}
	else if (x > 0)
	{
		result = 1;
	}
	return result;
}

void HelloWorld()
{
	printf("Hello, world!");
}

void ExpCalc()
{
	cout << "7+3=" << 7 + 3 << endl;
	cout << "7-3=" << 7 - 3 << endl;
	cout << "7*3=" << 7 * 3 << endl;
	cout << "7/3=" << 7 / 3 << endl;
	cout << "7.0/3.0=" << 7.0 / 3.0 << endl;
	cout << "7%3=" << 7 % 3 << endl;
	cout << "7+3*5=" << 7 + 3 * 5 << endl;
	cout << "(7+3)*5=" << (7 + 3) * 5 << endl;
}

void Variables()
{
	int score;
	int fuel;
	double distance;
	double engineTemp;
	char playAgain;
	bool shieldsUp;
	short lives, aliensKilled;
	typedef unsigned short int ushort;
	ushort bonus;

	score = 0;
	distance = 1200.76;
	playAgain = 'y';
	shieldsUp = true;
	lives = 3;
	aliensKilled = 10;
	engineTemp = 6572.89;
	bonus = 10;

	cout << "\nScore: " << score << endl;
	cout << "Distance: " << distance << endl;
	cout << "Play Again: " << playAgain << endl;
	cout << "Lives: " << lives << endl;
	cout << "Aliens Killed: " << aliensKilled << endl;
	cout << "Engine Temp: " << engineTemp << endl;
	cout << "\nHow much fuel? ";
	cin >> fuel;
	cout << "Fuel: " << fuel << endl;
	cout << "\nBonus: " << bonus;
}

void sum_mult_average()
{
	system("title ˜?˜, ˜?˜˜˜˜˜˜˜˜, ˜?˜˜˜ ˜˜?˜˜?˜");

	int x, y, z;

	cout << "˜˜˜˜˜˜ ˜˜ ˜?: " << endl;
	cin >> x >> y >> z;

	cout << "˜?˜: " << x + y + z << endl;
	cout << "˜?˜˜˜˜˜˜˜˜: " << x * y * z << endl;
	cout << "˜?˜˜˜ ˜˜?˜˜?˜: " << (float)(x + y + z) / 3 << endl;
}

void even_or_odd()
{
	system("title ˜??˜ ˜˜˜ ˜˜˜??˜");

	int x;

	cout << "˜˜˜˜˜˜ ˜?: ";
	cin >> x;

	if (x % 2 == 0)
		cout << "\n˜˜?˜";
	else
		cout << "\n˜˜˜˜?˜";
}

void switch_calc()
{
	system("title ˜˜˜˜˜˜˜˜");

	float x, y;
	int ans;

	cout << "˜˜˜˜˜˜ ˜˜˜ ˜?: ";

	cin >> x >> y;

	cout << "\n1. ˜˜˜˜˜˜˜˜˜\n2. ˜˜˜˜˜˜˜\n3. ˜˜˜˜˜˜˜˜\n4. ˜˜˜?˜˜\n\n˜˜˜˜˜ ˜˜˜˜?˜ ?˜˜˜˜ ˜ ˜?˜˜? ";
	cin >> ans;

	switch (ans)
	{
	case 1:
		cout << "\n˜?˜: " << x * y;
		break;
	case 2:
		cout << "\n˜?˜: " << x / y;
		break;
	case 3:
		cout << "\n˜?˜: " << x + y;
		break;
	case 4:
		cout << "\n˜?˜: " << x - y;
		break;
	default:
		cout << "\n˜?˜˜";
		break;
	}
}

void DrawRectangle()
{
	int w, h;

	cout << "˜˜˜˜˜˜ ˜?˜: ";
	cin >> w;

	cout << "˜˜˜˜˜˜ ˜˜˜˜˜: ";
	cin >> h;

	for (int j = 0; j < h; j++)
	{
		for (int i = 0; i < w; i++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "ru");

	while (true)
	{
		// sum_mult_average();
		even_or_odd();
		// switch_calc();
		// DrawRectangle();
		// Variables();
		//ExpCalc();
		// HelloWorld();
		//step_function();

		cout << "\n\n";

		system("pause");
		system("cls");
	}
}