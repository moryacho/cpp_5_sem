#include <iostream>
#include <vector>
#include "student.h"
#include "teacher.h"

int main() {
    setlocale(LC_ALL, "Russian");
    // Создание векторов указателей на базовый класс
    std::vector<Human*> people;

    // Добавление студентов
    people.push_back(new Student("Иванов", "Иван", "Иванович", { 5, 4, 3 }));
    people.push_back(new Student("Петров", "Петр", "Петрович", { 4, 4, 5 }));

    // Добавление учителей
    people.push_back(new Teacher("Сидоров", "Сидор", "Сидорович", "Математика"));
    people.push_back(new Teacher("Кузнецов", "Николай", "Кузнецович", "Физика"));

    // Полиморфный вызов методов
    for (auto person : people) {
        std::cout << person->get_full_name() << std::endl;

        // Если это студент, показываем средний балл
        Student* student = dynamic_cast<Student*>(person);
        if (student) {
            std::cout << "Средний балл: " << student->get_average_score() << std::endl;
        }
    }

    // Удаление объектов
    for (auto person : people) {
        delete person;
    }

    return 0;
}
