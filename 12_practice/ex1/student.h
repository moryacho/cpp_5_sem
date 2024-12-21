// student.h
#ifndef STUDENT_H
#define STUDENT_H

#include "human.h"
#include <vector>

class student : public human {
public:
    // Конструктор класса Student
    student(std::string last_name, std::string name, std::string second_name,
        std::vector<int> scores)
        : human(last_name, name, second_name), scores(scores) {}

    // Получение среднего балла студента
    float get_average_score() {
        unsigned int count_scores = this->scores.size();
        if (count_scores == 0) return 0.0f; // Избегаем деления на ноль

        unsigned int sum_scores = 0;
        for (unsigned int i = 0; i < count_scores; ++i) {
            sum_scores += this->scores[i];
        }
        return static_cast<float>(sum_scores) / count_scores; // Средний балл
    }

private:
    std::vector<int> scores; // Оценки студента
};

#endif // STUDENT_H
