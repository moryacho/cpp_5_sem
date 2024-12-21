// student.h
#ifndef STUDENT_H
#define STUDENT_H

#include "human.h"
#include <vector>

class student : public human {
public:
    // ����������� ������ Student
    student(std::string last_name, std::string name, std::string second_name,
        std::vector<int> scores)
        : human(last_name, name, second_name), scores(scores) {}

    // ��������� �������� ����� ��������
    float get_average_score() {
        unsigned int count_scores = this->scores.size();
        if (count_scores == 0) return 0.0f; // �������� ������� �� ����

        unsigned int sum_scores = 0;
        for (unsigned int i = 0; i < count_scores; ++i) {
            sum_scores += this->scores[i];
        }
        return static_cast<float>(sum_scores) / count_scores; // ������� ����
    }

private:
    std::vector<int> scores; // ������ ��������
};

#endif // STUDENT_H
