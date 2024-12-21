#include <iostream>
#include "student.h"

using namespace std;

int main() {
    Student* student02 = new Student;

    string name;
    string last_name;

    cout << "Name: ";
    getline(cin, name);

    cout << "Last name: ";
    getline(cin, last_name);

    int scores[5];
    int sum = 0;

    for (int i = 0; i < 5; ++i) {
        cout << "Score " << i + 1 << ": ";
        cin >> scores[i];
        sum += scores[i];
    }

    student02->set_name(name);
    student02->set_last_name(last_name);

    student02->set_scores(scores);

    float average_score = static_cast<float>(sum) / 5.0;

    student02->set_average_score(average_score);

    cout << "Average score for " << student02->get_name() << " "
        << student02->get_last_name() << " is "
        << student02->get_average_score() << endl;

    delete student02;

    return 0;
}
