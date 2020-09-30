#include <iostream>
#include <conio.h>
#include <cstdlib>

/* Created by Rizky Khapidsyah */

using namespace std;

int main() {

	char Nama[2][2][10];
	int i, j;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			cout << "Nama [" << i + 1 << "][" << j + 1 << "]  = ";
			cin >> Nama[i][j];
		}

		cout << endl;
	}

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			cout << "Nama [" << i + 1 << "][" << j + 1 << "]  = " << Nama[i][j] << endl;
		}
	}

	cout << endl;

	_getch();
	return 0;
}