#pragma once
#include <iostream>
#include <string>
class Student {
private:
    string name;          // ��� ��������
    string last_name;     // ������� ��������
    int scores[5];        // ������ ��������
    double average_score; // ������� ���� ��������

public:
    // ����������� ������ Student
    Student(string name, string last_name);

    // ������ ��� ��������� ��������
    void set_name(const string& name);
    void set_last_name(const string& last_name);
    void set_scores(int* new_scores);
    void set_average_score(double avg_score);

    // ������ ��� ��������� ��������
    string get_name() const;
    string get_last_name() const;
    double get_average_score() const;
};


