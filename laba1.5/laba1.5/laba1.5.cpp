﻿#include <iostream>
using namespace std;

class students {
public:
    string Name, Surname;
    int Age;
};

int main()
{
    setlocale(0, "");
    students stud[3];
    cout << "Заполните информацию о студентах" << endl;

    for (int i = 0; i < 3; i++) {
        cout << endl << "Студент №" << i + 1 << endl;
        cout << "Имя: "; cin >> stud[i].Name;
        cout << "Фамилия: "; cin >> stud[i].Surname;
        cout << "Возраст: "; cin >> stud[i].Age;
    }
    system("pause"); system("cls");

    string name, surname;
    int age, n = 0;
    cout << "Введите параметры для поиска студента" << endl;
    cout << "Имя: "; cin >> name;
    cout << "Фамилия: "; cin >> surname;
    cout << "Возраст: "; cin >> age;

    cout << endl << "Найденые совпадения" << endl;
    for (int i = 0; i < 3; i++)
    {
        if (stud[i].Name == name || stud[i].Surname == surname || stud[i].Age == age) 
        {
            cout << endl << "Имя: " << stud[i].Name << " Фамилия: " << stud[i].Surname << " Возраст: " << stud[i].Age;
        }
        if (stud[i].Name != name && stud[i].Surname != surname && stud[i].Age != age)
        {
            cout << endl << "Совпадений не найдено" << endl;
        }
    }

    cin.get(); cin.get();
    return 0;
}
