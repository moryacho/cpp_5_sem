#include <iostream>
using namespace std;

int main() {
    system("chcp 1251");
    int n; // Размер массива, вводимый пользователем

    cout << "Введите размер массива: ";
    cin >> n; // Пользователь вводит размер массива

    // Проверка на корректность размера массива
    if (n <= 0) {
        cout << "Размер массива должен быть положительным." << endl;
        return 1; // Завершение программы в случае некорректного ввода
    }

    int* mas = new int[n]; // Создаём динамический массив

    // Заполняем массив числами с клавиатуры
    for (int i = 0; i < n; i++) {
        cout << "mas[" << i << "] = ";
        cin >> mas[i];
    }

    // Определяем сумму всех элементов массива
    int s = 0;
    for (int i = 0; i < n; i++) {
        s += mas[i];
    }

    cout << "Сумма всех элементов: " << s << endl;

    // Рассчитываем среднее значение элементов массива
    double average = static_cast<double>(s) / n; // Приведение к double для точности
    cout << "Среднее значение элементов: " << average << endl;

    // Обрабатываем данные массива
    int sum_neg = 0, sum_pos = 0, sum_odd = 0, sum_even = 0;

    for (int i = 0; i < n; i++) {
        // Сумма отрицательных элементов
        if (mas[i] < 0) {
            sum_neg += mas[i];
        }
        // Сумма положительных элементов
        if (mas[i] > 0) {
            sum_pos += mas[i];
        }
        // Сумма элементов с нечетными индексами
        if (i % 2 != 0) {
            sum_odd += mas[i];
        }
        // Сумма элементов с четными индексами
        if (i % 2 == 0) {
            sum_even += mas[i];
        }
    }

    cout << "Сумма отрицательных элементов: " << sum_neg << endl;
    cout << "Сумма положительных элементов: " << sum_pos << endl;
    cout << "Сумма элементов с нечетными индексами: " << sum_odd << endl;
    cout << "Сумма элементов с четными индексами: " << sum_even << endl;

    // Дополнительные задания
    int max_index = 0, min_index = 0;
    int max_val = mas[0], min_val = mas[0];

    for (int i = 1; i < n; i++) {
        if (mas[i] > max_val) {
            max_val = mas[i];
            max_index = i;
        }
        if (mas[i] < min_val) {
            min_val = mas[i];
            min_index = i;
        }
    }

    cout << "Максимальный элемент: " << max_val << " (индекс " << max_index << ")" << endl;
    cout << "Минимальный элемент: " << min_val << " (индекс " << min_index << ")" << endl;

    // Произведение элементов между максимальным и минимальным
    int product = 1;
    if (max_index > min_index) {
        for (int i = min_index + 1; i < max_index; i++) {
            product *= mas[i];
        }
    }
    else {
        for (int i = max_index + 1; i < min_index; i++) {
            product *= mas[i];
        }
    }

    cout << "Произведение элементов между максимальным и минимальным: " << product << endl;

    delete[] mas; // Освобождаем динамическую память
    return 0;
}
