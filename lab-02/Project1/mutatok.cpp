#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{ 
	// változó értéke külön helyen tárolódik, minta változó neve és címe
	int f = 10;
	int *mut; //mutató memóriacímre, adatra mutat
	int &fi = f; //hivatkozás f változó helyére
	mut = &f;

	cout << "f=" << f<<", ";
	cout << "fi=" << fi << ", ";
	cout << "*mut=" << *mut << endl;

	fi = 20;
	cout << "f=" << f << ", ";
	cout << "fi=" << fi << ", ";
	cout << "mut=" << *mut << endl;

	cout << "&f=" << &f << ", "; //az elsõ három ugyanazt a címet adja vissza (f változó)
	cout << "&fi=" << &fi << ", "; 
	cout << "mut=" << mut << ", "; //változó címét adja vissza
	cout << "&mut=" << &mut << ", "; //változóhoz tartozó érték helye, önálló változó

	cout << endl;

	//Vektorok -késõbb is lehet hozzáadni
	vector<int> jegyek(3); //3 eleme van
	char bet;
	int szam, i;
	setlocale(LC_ALL, "Hun");
	for ( i = 0; i < 3; i++)
	{
		cout << "Adja meg az " << i + 1 << ". tanuló jegyét (1-5): ";
		cin >> jegyek[i];
	}

	cout << "Akar még jegyet felvenni? (y/n)" << endl;
	cin >> bet;
	if (bet == 'y')
	{
		do
		{
			cout << "Jegy (1-5): ";
			cin >> szam;
			jegyek.push_back(szam);
			cout << "Akar még egyet? (y/n) ";
			cin >> bet;
			i++;
		} while (bet == 'y');
	}

	cout << "Jegyek száma: " << jegyek.size()<<endl;
	cout << "Osztályzatok: ";
	for ( i = 0; i < jegyek.size(); i++)
	{
		cout << jegyek.at(i) << ", ";
	}

	cout << endl;

	jegyek.pop_back();
	cout << "Osztályzatok törlés után: ";
	for (i = 0; i < jegyek.size(); i++)
	{
		cout << jegyek.at(i) << ", ";
	}
	jegyek.insert(jegyek.begin()+1, 1);
	cout << "Osztályzatok kicserélés után: ";
	for (i = 0; i < jegyek.size(); i++)
	{
		cout << jegyek.at(i) << ", ";
	}
	return 0;
}