#ifndef HUMAN_H
#define HUMAN_H

#include <string>
#include <sstream>

class Human {
public:
    Human(std::string last_name, std::string name, std::string second_name)
        : last_name(last_name), name(name), second_name(second_name) {}

    virtual std::string get_full_name() {
        std::ostringstream full_name;
        full_name << this->last_name << " " << this->name << " " << this->second_name;
        return full_name.str();
    }

    // Деструктор должен быть виртуальным для правильного удаления производных классов
    virtual ~Human() {}

private:
    std::string name;
    std::string last_name;
    std::string second_name;
};

#endif // HUMAN_H
#pragma once
