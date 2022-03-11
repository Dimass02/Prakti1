#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Введите размер массива: ";
	int n; // длинна массива
	cin >> n;
	clock_t start, end;
	start = clock();
	int* a = new int[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 100; // заполняем массив случайными числами
		cout << a[i] << "  "; // вывод массива на экран
	}
	cout << "\n";
	int buff = 0;	// для обмена значениями
	int min = 0;   // для записи минимального значения
	int i,j;
	/************* Начало сортировки *******************/
	for (i = 0; i < n; i++)
	{
		min = i; 
		for (j = i + 1; j < n; j++)
		min = ( a[j] < a[min] ) ? j : min;
		if (i != min)
		{
		    buff = a[i];
		    a[i] = a[min];
		    a[min] = buff;
		}
    }
	/************* Конец сортировки *******************/
	
	for (int i = 0; i < n; i++) // вывод отсортированного массива
		cout << a[i] << "  ";
		cout << endl;
	end = clock();
	printf("Время выполнения программы %.4f(s)\n", ((double)end - start) / ((double)CLOCKS_PER_SEC));

} 
