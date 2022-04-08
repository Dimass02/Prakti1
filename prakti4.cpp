#include <iostream>
using namespace std;

int barrierSearch(int *x, int n, int k){
    x[n]=k;
    int i=0;
    while(x[i]!=k)i++;
    return i;
}

int main() {
    setlocale(LC_ALL, "rus");
    int n,i,k;
    cout << "Введите размер массива: "; 
    cin >> n;
    int* arr = new int[n]; // создали массив на n элементов

    for (int i = 0; i < n; i++) //Рандом заполнение массива
    {
        arr[i] = rand() % 100; // заполняем массив случайными числами
        cout << arr[i] << "  "; // вывод массива на экран
    }
    cout << endl;
    cout << "Введите число которое надо найти: "; //ключ
    cin >> k;
    cout << "Позиция введенного числа равна: " << barrierSearch(arr,n,k)+1;
}
