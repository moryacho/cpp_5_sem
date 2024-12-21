#ifndef TEACHER_H
#define TEACHER_H

#include "human.h"

class Teacher : public Human {
public:
    Teacher(std::string last_name, std::string name, std::string second_name,
        std::string subject)
        : Human(last_name, name, second_name), subject(subject) {}

    std::string get_full_name() override { // Переопределение метода
        return "Учитель: " + Human::get_full_name();
    }

    std::string get_subject() const {
        return subject;
    }

private:
    std::string subject;
};

#endif // TEACHER_H
#pragma once
