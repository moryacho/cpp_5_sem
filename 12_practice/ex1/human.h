// human.h
#ifndef HUMAN_H
#define HUMAN_H

#include <string>
#include <sstream>

class human {
public:
    // ����������� ������ human
    human(std::string last_name, std::string name, std::string second_name)
        : last_name(last_name), name(name), second_name(second_name) {}

    // ��������� ��� ��������
    std::string get_full_name() {
        std::ostringstream full_name;
        full_name << this->last_name << " " << this->name << " " << this->second_name;
        return full_name.str();
    }

private:
    std::string name;          // ���
    std::string last_name;     // �������
    std::string second_name;   // ��������
};

#endif // HUMAN_H
