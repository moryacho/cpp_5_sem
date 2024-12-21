#include <iostream>
#include <string>
#include "student.h"

using namespace std;

// Конструктор Student
Student::Student(string name, string last_name) {
    set_name(name);
    set_last_name(last_name);
}

// Установить имя
void Student::set_name(const string& name) {
    this->name = name;
}

// Установить фамилию
void Student::set_last_name(const string& last_name) {
    this->last_name = last_name;
}

// Установить оценки
void Student::set_scores(int* new_scores) {
    for (int i = 0; i < 5; ++i) {
        scores[i] = new_scores[i];
    }
}

// Установить средний балл
void Student::set_average_score(double avg_score) {
    average_score = avg_score;
}

// Получить имя
string Student::get_name() const {
    return name;
}

// Получить фамилию
string Student::get_last_name() const {
    return last_name;
}

// Получить средний балл
double Student::get_average_score() const {
    return average_score;
}