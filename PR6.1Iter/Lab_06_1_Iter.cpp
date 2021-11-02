//Lab_06_1_Iter.cpp
// Вольвенко Іван
// Лабораторна робота № 6.1
// Пошук елементів одновимірного масиву ітераційним та рекурсивним способом
// Варіант 13

#include <iostream>
#include <cmath>
#include <time.h>

using namespace std;

int Sum(int mas[], const int n);
int Kil(int mas[], const int n);
int Zam(int mas[], const int n);

int main()
{
	const int k = 24;
	int p[k];

	srand((unsigned)time(NULL));

	for (int i = 0; i < k; i++)
	{
		p[i] = 23 * rand() / RAND_MAX - 9;
		cout << p[i] << " ";
	}
	cout << endl;

	cout << "Sum = " << Sum(p, k) << endl;
	cout << "k = " << Kil(p, k) << endl;

	Zam(p, k);

	for (int i = 0; i < k; i++)
	{
		cout << p[i] << " ";
	}

	return 0;
}

int Sum(int mas[], const int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] > 0 || (i%2) == 0)
			s += mas[i];
	}
	return s;
}

int Kil(int mas[], const int n)
{
	int kil = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] > 0 || (i % 2) == 0)
			kil += 1;
	}
	return kil;
}

int Zam(int mas[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		if (mas[i] > 0 || (i % 2) == 0)
			mas[i] = 0;
	}
	return *mas;
}