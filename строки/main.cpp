#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    string text;

    cout << "Текст: ";
    getline(cin, text);

    // проверяю строку
    if (text.empty())
    {
        cout << "Строка пустая..";
        return 0;
    }

    bool first = true;

    // меняю сам регистр букв
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == ' ')
        {
            first = true;
        }
        else
        {
            if (first)
            {
                if (text[i] >= 'a' && text[i] <= 'z')
                    text[i] -= 32;

                first = false;
            }
            else
            {
                if (text[i] >= 'A' && text[i] <= 'Z')
                    text[i] += 32;
            }
        }
    }

    // добавляю точку
    if (text[text.length() - 1] != '.')
    {
        text += '.';
    }

    cout << "Результат: " << text << endl;

    return 0;
}