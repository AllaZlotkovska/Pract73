#include <iostream>
#include<queue>
#include <string>
#include "Windows.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    queue<char> q;
    string target = "студент";
    string input;

    cout << "Введіть символи: ";
    getline(cin, input);

    // Додавання символів до черги
    for (char c : input) {
        q.push(c);
    }

    // Перевірка, чи є слово "студент" у черзі
    string current = "";
    while (!q.empty()) {
        current += q.front();
        q.pop();
        if (current.find(target) != string::npos) {
            cout << "Слово 'студент' є у черзі" << endl;
            return 0;
        }
    }

    cout << "Слова 'студент' немає у черзі" << endl;
    return 0;
}
