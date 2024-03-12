#include <iostream>
using namespace std;

double Atlag(int*, int);//fg. deklar�ci�
void csere(int *x, int *y);
void csere2(int&, int&);


int main()
{
	setlocale(LC_ALL, "Hun");
	int jegy[10] = { 1,2,3,23,34,56,23,45,21,23 };
	int jegy2[10] = { 10,25,43,23,34,56,23,45,21,23 };
	cout << "\n Sz�mtani �tlag: " << Atlag(jegy, 10)<<endl;
	cout << "\n Sz�mtani �tlag: " << Atlag(jegy2, 10) << endl;

	//�rt�k szerinti �tad�s
	int szam1, szam2;
	cout << "szam1: ";
	cin >> szam1;
	cout << endl;
	cout << "szam2: ";
	cin >> szam2;
	cout << "Csere el�tt: " << szam1 << " , " << szam2;
	csere(&szam1, &szam2);
	cout << endl;
	cout << "Csere ut�n: " << szam1 << " , " << szam2;
	return 0;
}

double Atlag(int* tmb, int db) //fg. defin�ci�
{
	double osszeg = 0;
	for (int i = 0; i < db; i++)
	{
		osszeg += tmb[i];
	}
	return osszeg / db;
}

void csere(int *x, int *y)
{
	cout <<"x �s y c�me el�tte:" << &x << " , " << &y << endl;
	int seged;
	cout << "Seg�d c�me:" << &seged << endl;
	seged = *x;
	*x = *y;
	*y = seged;
	cout <<"x �s y c�me ut�na:" << &x<<" , " << &y << endl;

}

void csere2(int* x, int* y)
{
	cout << "x �s y c�me el�tte:" << &x << " , " << &y << endl;
	int seged;
	cout << "Seg�d c�me:" << &seged << endl;
	seged = *x;
	*x = *y;
	*y = seged;
	cout << "x �s y c�me ut�na:" << &x << " , " << &y << endl;

}