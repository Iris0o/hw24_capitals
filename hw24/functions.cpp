#include "Header.h"


void SetColor(int text)
{
    int background = Black;
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}
void GotoXY(int X, int Y)
{
    HANDLE hConsole;
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord = { X, Y };
    SetConsoleCursorPosition(hStdOut, coord);
}
void find_country(map <string, vector<string>>& _capitals) {
    string sity;
    SetColor(Cyan);
    cout << "Введите Город: ";
    cin >> sity;
    map<string, vector<string>>::iterator it;
    for (it = _capitals.begin(); it != _capitals.end(); it++) {
        for (string n : it->second) {
            if (n == sity) {

                SetColor(Yellow);
                cout << "_________________________________________________________________________________________\n";
                cout << "|";
                SetColor(Cyan); cout << setw(9) << "Страна";
                SetColor(Yellow); cout << "|";
                SetColor(Cyan); cout << setw(12) << "Столица";
                SetColor(Yellow); cout << "|";
                SetColor(Cyan); cout << setw(32) << "Города";
                SetColor(Yellow); cout << setw(34) << "|\n" << "|";
                SetColor(Cyan);
                cout << setw(9) << it->first;
                for (string n : it->second) {
                    SetColor(Yellow); cout << "|";
                    SetColor(Cyan); cout << setw(12) << n;
                }
                cout << endl;
                break;
            }
        }
    }


}

void show(map <string, vector<string>>& _capitals) {
    SetColor(Yellow);
    cout << "_________________________________________________________________________________________\n";
    cout << "|";
    SetColor(Cyan); cout << setw(9) << "Страна";
    SetColor(Yellow); cout << "|";
    SetColor(Cyan); cout << setw(12) << "Столица";
    SetColor(Yellow); cout << "|";
    SetColor(Cyan); cout << setw(32) << "Города";
    SetColor(Yellow); cout << setw(34) << "|\n";

    map<string, vector<string>>::iterator it;
    int max = 0;
    for (it = _capitals.begin(); it != _capitals.end(); it++) {
        if (it->second.size() > max) {
            max = it->second.size();
        }
    }
    for (it = _capitals.begin(); it != _capitals.end(); it++)
    {
        SetColor(Yellow);
        cout << "|";
        SetColor(Cyan);
        cout << setw(9) << it->first;
        for (string n : it->second) {
            SetColor(Yellow); cout << "|";
            SetColor(Cyan); cout << setw(12) << n;
        }
        if (it->second.size() <= max) {
            for (int i = 0; i < max - it->second.size() + 1; i++)
            {
                SetColor(Yellow);
                cout << "|";
                cout << setw(12) << "";

            }
        }
        cout << endl;
    }

}
void wait_enter() {
    while (true)
    {
        if (_kbhit()) // слушатель нажатия на клаву
        {
            Keys key = static_cast<Keys>(_getch());
            if (key == Keys::ENTER) {
                system("cls");

                break;
            }
        }
    }
}
int menu(map <string, vector<string>>& _capitals) {
    SetColor(LightBlue);
    cout << " Поиск Страны По Городу\n";
    cout << " Поиск Столицы По Стране\n";
    cout << " exit\n";
    int p = 0;
    while (true)
    {
        if (_kbhit()) // слушатель нажатия на клаву
        {
            Keys key = static_cast<Keys>(_getch());
            if (key == Keys::ESC) {
                exit(0);
                break;
            }
            else if (key == Keys::DOWN) {
                p++;
                if (p == 3)
                    p = 0;
            }
            else if (key == Keys::TOP) {
                p--;
                if (p == -1)
                    p = 2;
            }
            else if (key == Keys::ENTER) {
                system("cls");
                return p;
                break;
            }

            GotoXY(25, 2 + _capitals.size() + p);
            cout << " ";
        }
    }
}
void find_capital(map <string, vector<string>>& _capitals) {
    string country;
    cout << "Введите страну: ";
    cin >> country;
    map <string, vector<string>>::iterator it;
    for (it = _capitals.begin(); it != _capitals.end(); it++) {
        if (it->first == country) {
            SetColor(Yellow);
            cout << "_________________________________________________________________________________________\n";
            cout << "|";
            SetColor(Cyan); cout << setw(9) << "Страна";
            SetColor(Yellow); cout << "|";
            SetColor(Cyan); cout << setw(12) << "Столица";
            SetColor(Yellow); cout << "|";
            SetColor(Cyan); cout << setw(32) << "Города";
            SetColor(Yellow); cout << setw(34) << "|\n" << "|";
            SetColor(Cyan);
            cout << setw(9) << it->first;
            for (string n : it->second) {
                SetColor(Yellow); cout << "|";
                SetColor(Cyan); cout << setw(12) << n;
            }
            cout << endl;
            break;
        }

    }


}