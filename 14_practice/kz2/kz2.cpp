#include <iostream>
#include <vector>
#include <string>

template <typename Container>
void Print(const Container& container, const std::string& delimiter) {
    for (auto it = container.begin(); it != container.end(); ++it) {
        std::cout << *it; // Вывод текущего элемента
        if (std::next(it) != container.end()) { // Если не последний элемент
            std::cout << delimiter; // Вывод разделителя
        }
    }
    std::cout << "\n"; // Перевод строки в конце
}

int main() {
    std::vector<int> data = { 1, 2, 3 };
    Print(data, ", "); // на экране: 1, 2, 3

    std::vector<std::string> strData = { "apple", "banana", "cherry" };
    Print(strData, " - "); // на экране: apple - banana - cherry

    return 0;
}
