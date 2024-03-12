#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Feltolt(int [], int);
void Kiir(int [], int);
int Max(int[], int);

int main()
{
	srand((unsigned)time(NULL));
	int db;
	do
	{
		cout << "Hány tanulója van a csoportnak?: ";
		cin >> db;
		if (db < 1 || db>10) cout << "Nem jo a szam (1-10)" << endl;

	} while (db<1 || db>10);

	int *jegy = new int[db];
	Feltolt(jegy, db);
	Kiir(jegy, db);
	cout << "A legnagyobb dolgozat erteke:" << Max(jegy, db) << endl;

	
}

void Feltolt(int tmb[], int n)
{
	for ( int i = 0; i < n; i++)
	{
		tmb[i] = rand() % 100 + 1;

	}
}

void Kiir(int tmb[], int n)
{
	cout << "\nA csoport jegyei: \n";
	for (int i = 0; i < n; i++)
	{
		cout << setw(4) << tmb[i];
	}
	cout << endl;
}

int Max(int tmb[], int n)
{
	int max = tmb[0]; //felt.,hogy az elsõ a max, így egyszer kevesebb alkalommal fut le a for
	for (int i = 1; i < n; i++)
	{
		if (max < tmb[i]) max = tmb[i];
	}
	return max;
}