#include <iostream>
#include <vector>

template <typename T>
double calculate_average(T* array, int size) {
    if (size <= 0) {
        return 0.0; 
    }

    T sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }
    return static_cast<double>(sum) / size;
}

int main() {
    setlocale(LC_ALL, "Russian");
    // Пример использования с int массивом
    int intArray[] = { 1, 2, 3, 4, 5 };
    int intSize = sizeof(intArray) / sizeof(intArray[0]);
    std::cout << "Среднее арифметическое int массива: " << calculate_average(intArray, intSize) << std::endl;

    // Пример использования с long массивом
    long longArray[] = { 1000L, 2000L, 3000L, 4000L, 5000L };
    int longSize = sizeof(longArray) / sizeof(longArray[0]);
    std::cout << "Среднее арифметическое long массива: " << calculate_average(longArray, longSize) << std::endl;

    // Пример использования с double массивом
    double doubleArray[] = { 1.5, 2.5, 3.5, 4.5, 5.5 };
    int doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);
    std::cout << "Среднее арифметическое double массива: " << calculate_average(doubleArray, doubleSize) << std::endl;

    // Пример использования с char массивом (приводим к int для суммирования)
    char charArray[] = { 'a', 'b', 'c', 'd', 'e' };
    int charSize = sizeof(charArray) / sizeof(charArray[0]);
    // Приводим символы к их числовым значениям
    double charAverage = calculate_average(reinterpret_cast<int*>(charArray), charSize);
    std::cout << "Среднее арифметическое char массива: " << charAverage << std::endl;

    return 0;
}
