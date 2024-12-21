// teacher.h
#ifndef TEACHER_H
#define TEACHER_H

#include "human.h"
#include <string>

class teacher : public human {
public:
    // ����������� ������ teacher
    teacher(std::string last_name, std::string name, std::string second_name,
        unsigned int work_time)
        : human(last_name, name, second_name), work_time(work_time) {}

    // ��������� ���������� ������� �����
    unsigned int get_work_time() const {
        return this->work_time;
    }

private:
    // ������� ����
    unsigned int work_time;
};

#endif // TEACHER_H
#pragma once
