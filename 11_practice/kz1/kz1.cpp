#include <iostream>
#include <iomanip> 
using namespace std;

class Time {
private:
    int hours;
    int minutes;

    void normalize() {
        if (minutes >= 60) {
            hours += minutes / 60;
            minutes = minutes % 60;
        }
        else if (minutes < 0) {
            hours -= (-minutes / 60) + 1;
            minutes = 60 - ((-minutes) % 60);
        }
        if (hours < 0) {
            hours = 0;
            minutes = 0; 
        }
    }

public:
    Time() : hours(0), minutes(0) { }

    Time(int h, int m) : hours(h), minutes(m) {
        normalize();
    }

    Time operator+ (const Time& t) const {
        return Time(hours + t.hours, minutes + t.minutes);
    }

    Time operator- (const Time& t) const {
        return Time(hours - t.hours, minutes - t.minutes);
    }

    Time operator+ (double h) const {
        return Time(hours + static_cast<int>(h), minutes); // Только целая часть добавляется
    }

    friend Time operator+ (double h, const Time& t) {
        return t + h; // Используем перегрузку выше
    }

    bool operator== (const Time& t) const {
        return (hours == t.hours) && (minutes == t.minutes);
    }

    void display() const {
        cout << setw(2) << setfill('0') << hours << ":"
            << setw(2) << setfill('0') << minutes << endl;
    }
};

int main() {
    Time t1(2, 30);
    Time t2(1, 45);

    Time t3 = t1 + t2;
    cout << "Сложение t1 + t2: ";
    t3.display();

    Time t4 = t1 - t2;
    cout << "Вычитание t1 - t2: ";
    t4.display();

    Time t5 = t1 + 1.5; // 1.5 часа
    cout << "Сложение t1 + 1.5: ";
    t5.display();

    Time t6 = 1.75 + t2; // 1.75 часа
    cout << "Сложение 1.75 + t2: ";
    t6.display();

    if (t1 == t2) {
        cout << "t1 и t2 равны" << endl;
    }
    else {
        cout << "t1 и t2 не равны" << endl;
    }

    return 0;
}
