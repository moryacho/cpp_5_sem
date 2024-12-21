#pragma once
#include <iostream>
#include <string>
class Student {
private:
    string name;          // Имя студента
    string last_name;     // Фамилия студента
    int scores[5];        // Оценки студента
    double average_score; // Средний балл студента

public:
    // Конструктор класса Student
    Student(string name, string last_name);

    // Методы для установки значений
    void set_name(const string& name);
    void set_last_name(const string& last_name);
    void set_scores(int* new_scores);
    void set_average_score(double avg_score);

    // Методы для получения значений
    string get_name() const;
    string get_last_name() const;
    double get_average_score() const;
};


