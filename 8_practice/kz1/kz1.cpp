#include <iostream>
#include <iomanip>

using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

    void normalize() {
        if (seconds >= 60) {
            minutes += seconds / 60;
            seconds %= 60;
        }
        if (minutes >= 60) {
            hours += minutes / 60;
            minutes %= 60;
        }
        hours %= 24;
    }

public:
    Time() : hours(0), minutes(0), seconds(0) {}

    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {
        normalize();
    }

    void display() const {
        cout << setfill('0') << setw(2) << hours << ":"
            << setfill('0') << setw(2) << minutes << ":"
            << setfill('0') << setw(2) << seconds << endl;
    }

    Time operator+(const Time& other) const {
        Time result;
        result.hours = this->hours + other.hours;
        result.minutes = this->minutes + other.minutes;
        result.seconds = this->seconds + other.seconds;
        result.normalize();
        return result;
    }
};

int main() {
    const Time time1(7, 70, 63);
    const Time time2(1, 50, 30);

    Time result;

    result = time1 + time2;

    result.display(); // Вывод: 12:22:21

    return 0;
}
