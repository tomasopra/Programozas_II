#include <iostream>
#include <string>
using namespace std;


int a = 5;

int FV(int b) {
	cout << b << endl; //15
	cout << a << endl; //5
	return a + 1; //6

	{
		double b = 3.5;
		cout << b << endl; //3.5
		cout << a << endl; //5
	}
}
int main()
{
	//változók érvényességi köre
	int a = 15;
	cout << FV(a);
	/*15 5 6*/



	//idõ
	cout << endl;
	clock_t kezd, veg;
	kezd = clock();
	int k;
	for (int i = 0; i < 2*pow(10,9); i++)
	{
		k = 1 + 1;
	}
	veg = clock();
	cout << veg - kezd;
}
