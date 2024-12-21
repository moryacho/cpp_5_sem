// Student.cpp
#include "Student.h"

Student::Student(string name, string last_name, IdCard* id) {
    set_name(name);
    set_last_name(last_name);
    setIdCard(id);
}

void Student::setIdCard(IdCard* c) {
    iCard = c;
}

IdCard Student::getIdCard() {
    return *iCard;
}

void Student::set_name(string name) {
    this->name = name;
}

string Student::get_name() {
    return name;
}

void Student::set_last_name(string last_name) {
    this->last_name = last_name;
}

string Student::get_last_name() {
    return last_name;
}
