#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{ 
	// v�ltoz� �rt�ke k�l�n helyen t�rol�dik, minta v�ltoz� neve �s c�me
	int f = 10;
	int *mut; //mutat� mem�riac�mre, adatra mutat
	int &fi = f; //hivatkoz�s f v�ltoz� hely�re
	mut = &f;

	cout << "f=" << f<<", ";
	cout << "fi=" << fi << ", ";
	cout << "*mut=" << *mut << endl;

	fi = 20;
	cout << "f=" << f << ", ";
	cout << "fi=" << fi << ", ";
	cout << "mut=" << *mut << endl;

	cout << "&f=" << &f << ", "; //az els� h�rom ugyanazt a c�met adja vissza (f v�ltoz�)
	cout << "&fi=" << &fi << ", "; 
	cout << "mut=" << mut << ", "; //v�ltoz� c�m�t adja vissza
	cout << "&mut=" << &mut << ", "; //v�ltoz�hoz tartoz� �rt�k helye, �n�ll� v�ltoz�

	cout << endl;

	//Vektorok -k�s�bb is lehet hozz�adni
	vector<int> jegyek(3); //3 eleme van
	char bet;
	int szam, i;
	setlocale(LC_ALL, "Hun");
	for ( i = 0; i < 3; i++)
	{
		cout << "Adja meg az " << i + 1 << ". tanul� jegy�t (1-5): ";
		cin >> jegyek[i];
	}

	cout << "Akar m�g jegyet felvenni? (y/n)" << endl;
	cin >> bet;
	if (bet == 'y')
	{
		do
		{
			cout << "Jegy (1-5): ";
			cin >> szam;
			jegyek.push_back(szam);
			cout << "Akar m�g egyet? (y/n) ";
			cin >> bet;
			i++;
		} while (bet == 'y');
	}

	cout << "Jegyek sz�ma: " << jegyek.size()<<endl;
	cout << "Oszt�lyzatok: ";
	for ( i = 0; i < jegyek.size(); i++)
	{
		cout << jegyek.at(i) << ", ";
	}

	cout << endl;

	jegyek.pop_back();
	cout << "Oszt�lyzatok t�rl�s ut�n: ";
	for (i = 0; i < jegyek.size(); i++)
	{
		cout << jegyek.at(i) << ", ";
	}
	jegyek.insert(jegyek.begin()+1, 1);
	cout << "Oszt�lyzatok kicser�l�s ut�n: ";
	for (i = 0; i < jegyek.size(); i++)
	{
		cout << jegyek.at(i) << ", ";
	}
	return 0;
}