#include <iostream>
#include <map>
#include <string>

using namespace std; 

struct StudentGrade {
    string name;
    char grade;

    StudentGrade(const string& n, char g) : name(n), grade(g) {}
};

int main() {
    setlocale(LC_ALL, "Russian");
    map<string, char> gradeBook; 
    string name;
    char grade;
    char continueInput = 'y';

    while (continueInput == 'y') {
        cout << "Введите имя студента: ";
        getline(cin, name);

        cout << "Введите оценку (A, B, C, D, F): ";
        cin >> grade;
        cin.ignore(); 

        if (grade < 'A' || grade > 'F') {
            cout << "Некорректная оценка! Пожалуйста, введите оценку от A до F." << endl;
            continue;
        }

        gradeBook[name] = grade;
        cout << "Оценка для студента " << name << " успешно присвоена." << endl;

        cout << "Хотите добавить еще одного студента? (y/n): ";
        cin >> continueInput;
        cin.ignore(); 
    }

    cout << "\nСписок студентов и их оценки:" << endl;
    for (const auto& entry : gradeBook) {
        cout << "Студент: " << entry.first << ", Оценка: " << entry.second << endl;
    }

    return 0;
}
