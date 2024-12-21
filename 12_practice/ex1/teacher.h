// teacher.h
#ifndef TEACHER_H
#define TEACHER_H

#include "human.h"
#include <string>

class teacher : public human {
public:
    // Конструктор класса teacher
    teacher(std::string last_name, std::string name, std::string second_name,
        unsigned int work_time)
        : human(last_name, name, second_name), work_time(work_time) {}

    // Получение количества учебных часов
    unsigned int get_work_time() const {
        return this->work_time;
    }

private:
    // Учебные часы
    unsigned int work_time;
};

#endif // TEACHER_H
#pragma once
