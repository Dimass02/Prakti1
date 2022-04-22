#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){   
    setlocale(LC_ALL,"Russian");
    vector <char> L1 (0,0);                 // Инициализируем векторы.
    vector <char> L2 (0,0);
    vector <char> L (0,0);
    char a1 = ' '   , a2 = ' ' ;
    for (unsigned int b=0; b<10; ++b){      // Позволяет произвести 10* итераций цикла.
        cout << "Введите элементы для списка L1, для завершения используйте знак '.' " << endl;
        while (cin >> a1){                  // Пока вводим эл-ты для 1-ого списка...
            L1.push_back(a1);               // Добавляет элемент в конец вектора.
            if (a1 == '.'){                 // Условие завершения ввода.
                L1.pop_back();              // удаляем '.' и выходим из цикла.
                break;
            }  
        }
        cout << endl;
        cout << "Список первый:" << endl;
            for (unsigned int i=0; i < L1.size(); ++i){
                cout << L1 [i] << ' ';
            } 
            cout << endl << endl;
        cout << "Введите элементы для списка L2, для завершения используйте знак '.' "<< endl;
        while (cin >> a2){                  // Пока вводим эл-ты для 2-ого списка...
            L2.push_back(a2);               // Добавляет элемент в конец вектора.
            if (a2 == '.'){                 // Условие завершения ввода.
                L2.pop_back();              // удаляем '.' и выходим из цикла.
                break;
            }  
        }
        cout << endl;
        cout << "Список второй:" << endl;
        for (unsigned int i=0; i < L2.size(); ++i){
            cout << L2 [i] << ' ';
        } 
        cout << endl;
// Следуюший цикл заносит повторяющиеся эл-ты в третий вектор (список). Применяем вложенный цикл "for".
        for (unsigned int i = 0; i < L1.size(); ++i){
            for (unsigned int j = 0; j < L2.size(); ++j){
                if (L2[j]==L1[i]){
                    L.push_back(L1[i]);
                }  
            } 
        } 
        cout << endl;
        sort(L.begin(), L.end());       // Сортируем полученный вектор.
            vector<char>::iterator t;   // Определяем итератор для использования ф-ии "unique".
                t=unique (L.begin(), L.end ()); // Удаляем лишние копии элем-в.
                    L.resize(t - L.begin());   //Ресайзим вектор.
        if (L.size() > 0){                  // Если есть повторы, то..., если нет, то...
            cout << "Элементы, содержащиеся в обоих списках L:"<< endl;
            for (unsigned int i=0; i < L.size(); ++i){  
                cout << L [i] << ' ';       // Выводим содержимое 3-го списка.
            } 
            cout << endl;
        }  
        else    
            cout << "Совпадающие элементы отсутствуют." << ' ' << endl;
        return 0;
    }
}
