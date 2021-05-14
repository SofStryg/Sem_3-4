#include <iostream>
#include <vector>

using namespace std;
int main()
{
    setlocale(0, "");
    vector <string> group1 = { "Vasya","Petya","Kolya" };
    vector <string> group2 = { "Dasha","Nikita","Alex" };
    vector <string>::iterator it1 = group1.begin();
    vector <string>::iterator it2 = group2.begin();


    cout << "Изначальные вектора:" << endl;
    cout << "group1:" << " ";
    for (int i = 0; i < 3; i++)
        cout << group1[i] << " ";
    cout << endl;
    cout << "group2:" << " ";
    for (int i = 0; i < 3; i++)
        cout << group2[i] << " ";
    cout << endl << endl;

    //Начинаем изменять вектора.
    //Меняем значение векторов местами с помощью метода swap
    group1.swap(group2);
    //С помощью функции swap записываем значение вектора в обратном порядке. Ссылаясь на итератор начала вектора и итератор конца вектора.
    reverse(group1.begin(), group1.end());

    cout << "Получившиеся вектора:" << endl;
    cout << "group1:" << " ";
    for (int i = 0; i < 3; i++)
        cout << group1[i] << " ";
    cout << endl;
    cout << "group2:" << " ";
    for (int i = 0; i < 3; i++)
        cout << group2[i] << " ";
    cout << endl;
}
