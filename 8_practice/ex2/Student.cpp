
#include "Student.h"

void Student::set_name(string student_name) {
    name = student_name;
}

string Student::get_name() const {
    return name;
}

void Student::set_last_name(string student_last_name) {
    last_name = student_last_name;
}

string Student::get_last_name() const {
    return last_name;
}

void Student::set_scores(int student_scores[]) {
    for (int i = 0; i < 5; ++i) {
        scores[i] = student_scores[i];
    }
}

void Student::set_average_score(double ball) {
    average_score = ball;
}

double Student::get_average_score() const {
    return average_score;
}
