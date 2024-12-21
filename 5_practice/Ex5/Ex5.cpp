#include <iostream>
#include <ctime>
#include <vector> // Подключаем заголовочный файл для работы с векторами

using namespace std;

int main()
{
    system("chcp 1251");
    srand(time(NULL));
    int k = 0; // Количество неправильных ответов
    const int n = 10; // Константа для размера массива
    int mas[n]; // Массив для сохранения ответов

    vector<int> v1; // Вектор для хранения правильных ответов
    vector<int> v2; // Вектор для хранения неправильных ответов

    for (int i = 0; i < n; ++i) {
        // Генерация двух случайных множителей от 1 до 10
        int multiplier1 = rand() % 10 + 1; // от 1 до 10
        int multiplier2 = rand() % 10 + 1; // от 1 до 10

        // Вычисляем правильный ответ
        int correctAnswer = multiplier1 * multiplier2;

        // Запрос ответа у пользователя
        int userAnswer;
        cout << "Question " << (i + 1) << ": " << multiplier1 << " * " << multiplier2 << " = ";
        cin >> userAnswer;

        // Проверка ответа
        if (userAnswer != correctAnswer) {
            cout << "Incorrect! Correct answer: " << correctAnswer << endl;
            v2.push_back(userAnswer); // Добавляем неправильный ответ в вектор
            k++; // Увеличиваем счетчик неправильных ответов
        }
        else {
            cout << "Correct!" << endl;
            v1.push_back(userAnswer); // Добавляем правильный ответ в вектор
        }

        // Сохраняем ответ пользователя в массив
        mas[i] = userAnswer;
    }

    // Вывод всех введенных ответов
    cout << "\nAll: ";
    for (int i = 0; i < n; i++) {
        cout << mas[i] << " "; // Выводим все ответы, разделённые пробелом
    }
    cout << endl;

    // Вывод результатов теста
    cout << endl << "You answered incorrectly " << k << " questions from " << n << "." << endl;

    // Вывод правильных ответов
    cout << "\nGood: ";
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " "; // Выводим все правильные ответы
    }
    cout << endl;

    // Вывод неправильных ответов
    cout << "\nBad: ";
    for (int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " "; // Выводим все неправильные ответы
    }
    cout << endl;

    return 0;
}
