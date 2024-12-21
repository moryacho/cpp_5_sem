// student.h
#pragma once
#include <string>
#include <iostream>
#include <fstream>

class Student {
private:
    std::string name;       // Имя студента
    std::string lastName;   // Фамилия студента
    int scores[5];          // Оценки студента

public:
    Student(const std::string& name, const std::string& lastName, const int scoresArray[5])
        : name(name), lastName(lastName) {
        for (int i = 0; i < 5; ++i) {
            scores[i] = scoresArray[i];
        }
    }

    void save();

    ~Student();

    std::string get_name() const { return name; }
    std::string get_last_name() const { return lastName; }
};
//student.cpp
#include "student.h"

Student::~Student() {
    save();
}

void Student::save() {
    std::ofstream fout("students.txt", std::ios::app);
    fout << get_name() << " " << get_last_name() << " ";
    for (int i = 0; i < 5; ++i) {
        fout << scores[i] << " ";
    }
    fout << std::endl;
    fout.close();
}
//main.cpp
#include <iostream>
#include "student.h"

int main() {
    int scores1[5] = { 5, 4, 5, 3, 3 };
    int scores2[5] = { 5, 5, 3, 4, 5 };
    int scores3[5] = { 5, 3, 3, 3, 3 };

    Student student1("Василий", "Федоров", scores1);
    Student student2("Иван", "Сидоров", scores2);
    Student student3("Андрей", "Иванов", scores3);

    return 0;
}
