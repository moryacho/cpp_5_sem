#include <iostream>
#include <fstream>
#include <cstdlib> // Для rand()
#include <ctime>   // Для time()

using namespace std;

int main() {
    double sum = 0; // Переменная для суммы чисел
    const int n = 100; // Размер массива
    double nums[n]; // Массив для хранения случайных чисел

    // Инициализация генератора случайных чисел
    srand(static_cast<unsigned>(time(0)));

    // Заполнение массива случайными числами
    for (int i = 0; i < n; i++) {
        nums[i] = static_cast<double>(rand() % 100); // Случайные числа от 0 до 99
    }

    // Создание объекта ofstream и открытие файла для записи в бинарном режиме
    ofstream out("test", ios::out | ios::binary);
    if (!out) {
        cout << "Файл открыть невозможно\n";
        return 1;
    }

    // Запись массива в файл
    out.write(reinterpret_cast<char*>(nums), sizeof(nums)); // Приведение типа к (char*)
    out.close(); // Закрытие потока

    // Создание объекта ifstream и открытие файла для чтения в бинарном режиме
    ifstream in("test", ios::in | ios::binary);
    if (!in) {
        cout << "Файл открыть невозможно\n";
        return 1;
    }

    // Чтение массива из файла
    in.read(reinterpret_cast<char*>(&nums), sizeof(nums)); // Приведение типа к (char*)
    in.close(); // Закрытие потока

    // Подсчет суммы считываемых данных и вывод результатов на экран
    int k = sizeof(nums) / sizeof(double);
    for (int i = 0; i < k; i++) {
        sum += nums[i]; // Подсчет суммы
        cout << nums[i] << ' '; // Вывод числа
    }
    cout << "\nsum = " << sum << endl;

    return 0;
}
