// lab 6.3 i
// варіант 24

#include <iostream>
#include <iomanip>
using namespace std;
int first_pair(int* a, int size)
{
	int m = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] % 2 == 0)
		{
			m = a[i];
			return m;
		}
	}
	return m;
}

int max(int* a, int size)
{
	int m = first_pair(a, size);

	for (int i = 0; i < size; i++)
	{
		if (a[i] % 2 == 0)
		{
			if (a[i] > m)
				m = a[i];
		}
	}
	return m;
}

void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << '\n';
}

void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}


int main()
{
	srand((unsigned)time(0));

	const int n = 20;
	int a[n];
	Create(a, n, -10, 60);
	cout << "array = ";
	Print(a, n);
	cout << '\n' << "max" << setw(5) << max(a, n) << '\n';
}
