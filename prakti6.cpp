#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int hashfunction(string x)
{
    int size=x.length();
    return hash<int>()(size);
}

int main()
{
    setlocale(LC_ALL, "ru");
    ifstream file("text.txt");
    int arr[100];
    int i=0;
    
    while(i<=(sizeof arr / sizeof arr[0])) {
        string str;
        getline(file, str);
        arr[i]=hashfunction(str);
        i++;
    }
    cout<<"Введи текст, который хочешь найти: ";
    string key;
    getline(cin, key);
    
    int keyhash=hashfunction(key)+1;
    i=0;
    while(i<=(sizeof arr / sizeof arr[0]))
    {
        if (keyhash==arr[i]){cout<<"Номер строки: "<<i+1;break;}
        i++;
    }
    
    return 0;
}
