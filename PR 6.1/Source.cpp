// PR 6.1 інтераційним спосіб
// <Обухов Віктор>
// Лабораторна робота 6.1
// Пошук елементів одновимірного масиву ітераційним та рекурсивним способом
// Варіан 7


#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* b, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		b[i] = Low + rand() % (High - Low + 1);
}

void Sum(int* b, const int size, int& S, int& k)
{
	for (int i = 0; i < size; i++)
		if (!(b[i] % 2 == 1 || b[i] % 3 == 0))
		{
			S += b[i];
			k++;
			b[i] = 0;
		}
}

int main()
{
	srand((unsigned)time(NULL));

	const int n = 21;
	int b[n];

	int Low = 10;
	int Hihg = 90;

	Create(b, n, Low, Hihg);

	cout << setw(4) << "b[] = { ";

	for (int i = 0; i < n; i++)
	{
		cout << setw(4) << b[i] << ",";
	}
	cout << " } " << endl;
	cout << endl;

	int S = 0;
	int k = 0;

	Sum(b, n, S, k);

	cout << " Number = " << k << endl;
	cout << setw(4) << " Sum = " << S << endl;
	cout << endl;
	cout << setw(4) << " b[] = { ";
	for (int i = 0; i < n; i++)
	{
		cout << setw(4) << b[i] << ",";
	}
	cout << " } " << endl;

	return 0;

}