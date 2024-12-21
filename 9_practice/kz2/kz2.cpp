#include <iostream>
#include <iomanip>
#include <stdexcept>

using namespace std;

class Time {
private:
    int hours;   
    int minutes;
    int seconds; 

    void validate() const {
        if (hours < 0 || minutes < 0 || seconds < 0) {
            throw invalid_argument("Часы, минуты и секунды должны быть неотрицательными.");
        }
        if (minutes >= 60 || seconds >= 60) {
            throw invalid_argument("Минуты и секунды должны быть в диапазоне [0, 59].");
        }
    }

public:
    Time() : hours(0), minutes(0), seconds(0) {}

    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {
        validate(); 
    }

    void display() const {
        cout << setfill('0') << setw(2) << hours << ":"
            << setfill('0') << setw(2) << minutes << ":"
            << setfill('0') << setw(2) << seconds << endl;
    }
};

int main() {
    try {
        Time time1(10, 30, 55); 
        time1.display(); 

        Time time2(2, 15, 45); 
        time2.display(); 

        Time sum = time1 + time2; 
        sum.display(); 

        Time invalidTime(-1, 60, 70); 
    }
    catch (const invalid_argument& e) {
        cerr << "Ошибка: " << e.what() << endl; // Обработка исключений
    }

    return 0;
}
