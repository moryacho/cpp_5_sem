#ifndef STUDENT_H
#define STUDENT_H

#include "human.h"
#include <vector>

class Student : public Human {
public:
    Student(std::string last_name, std::string name, std::string second_name,
        std::vector<int> scores)
        : Human(last_name, name, second_name), scores(scores) {}

    float get_average_score() {
        unsigned int count_scores = this->scores.size();
        if (count_scores == 0) return 0.0f;

        unsigned int sum_scores = 0;
        for (unsigned int i = 0; i < count_scores; ++i) {
            sum_scores += this->scores[i];
        }
        return static_cast<float>(sum_scores) / count_scores;
    }

    std::string get_full_name() override { // Переопределение метода
        return "Студент: " + Human::get_full_name();
    }

private:
    std::vector<int> scores;
};

#endif // STUDENT_H
#pragma once
