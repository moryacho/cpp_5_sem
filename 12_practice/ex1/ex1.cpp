//1
/*#include <iostream>
#include "student.h"

int main() {
    // Создаем объект студента
    std::vector<int> scores = { 5, 4, 3, 4, 5 }; // Оценки студента
    student stud("Зорина", "Яна", "Сергеевна", scores);

    // Вывод информации о студенте
    std::cout << "ФИО студента: " << stud.get_full_name() << std::endl;
    std::cout << "Средний балл: " << stud.get_average_score() << std::endl;

    return 0;
}*/
#include <iostream>
#include <vector>
#include "human.h"
#include "student.h"
//2
int main() {
    std::vector<int> scores;

    scores.push_back(5);
    scores.push_back(5);
    scores.push_back(4);
    scores.push_back(4);
    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(5);
    scores.push_back(4);

    student* stud = new student("Зорина", "Яна", "Сергеевна", scores);

    std::cout << "ФИО студента: " << stud->get_full_name() << std::endl;

    std::cout << "Средний балл: " << stud->get_average_score() << std::endl;

    delete stud;

    return 0;
}
//3
// main.cpp
#include <iostream>
#include "human.h"
#include "teacher.h"

int main() {
    unsigned int teacher_work_time = 40;

    teacher* tch = new teacher("Сергеев", "Дмитрий", "Сергеевич", teacher_work_time);

    std::cout << tch->get_full_name() << std::endl;
    std::cout << "Количество часов: " << tch->get_work_time() << std::endl;

    delete tch;
    return 0;
}
