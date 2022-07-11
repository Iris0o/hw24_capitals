#include "Header.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string country, city;
    map <string, vector<string>> capitals;

    vector <string> all_city;

    capitals["США"] = { "Вашингтон","Нью-Йорк","Лос-Анджелес","Чикаго"};
    capitals["Россия"] = { "Москва", "Владивосток", "Кемерово", "Хабаровск", "Казань"};
    capitals["Германия"] = { "Берлин","Гамбург","Мюнхен","Кёльн","Дюссельдорф" };
    capitals["Китай"] = { "Пекин","Тяньцзинь","Чунцин","Шанхай","Тайбэй" };
    capitals["Финляндия"] = { "Хельсинки","Эспоо","Тампере","Вантаа","Оулу","Турку" };


    while (true) {
        system("cls");


        show(capitals);
        switch (menu(capitals))
        {
        case 0: {
            system("cls");
            find_country(capitals);

            cout << "\nНажмите Enter Для Продолжения...";
            wait_enter();

        }break;

        case 1: {
            system("cls");
            find_capital(capitals);

            cout << "\nНажмите Enter Для Продолжения...";
            wait_enter();
        }break;

        case 2: { exit(0); }break;
        default: { break; }
        }
    }
}


