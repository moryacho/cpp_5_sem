#include <iostream>
using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;

    int toSeconds() const {
        return hours * 3600 + minutes * 60 + seconds;
    }

    Time addTime(const Time& other) const {
        Time result;
        result.seconds = seconds + other.seconds;
        result.minutes = minutes + other.minutes + result.seconds / 60;
        result.hours = hours + other.hours + result.minutes / 60;

        result.seconds %= 60;
        result.minutes %= 60;
        result.hours %= 24;

        return result;
    }

    Time subtractTime(const Time& other) const {
        Time result;
        result.seconds = seconds - other.seconds;
        result.minutes = minutes - other.minutes;
        result.hours = hours - other.hours;

        if (result.seconds < 0) {
            result.seconds += 60;
            result.minutes--;
        }
        if (result.minutes < 0) {
            result.minutes += 60;
            result.hours--;
        }

        return result;
    }
};

int main() {
    Time time1, time2;

    cout << "Enter time (hours, minutes, seconds): ";
    cin >> time1.hours >> time1.minutes >> time1.seconds;

    if (time1.hours < 0 || time1.hours >= 24 ||
        time1.minutes < 0 || time1.minutes >= 60 ||
        time1.seconds < 0 || time1.seconds >= 60) {
        cout << "Invalid time input!\n";
        return 1;
    }


    cout << "Enter another time (hours, minutes, seconds): ";
    cin >> time2.hours >> time2.minutes >> time2.seconds;

    if (time2.hours < 0 || time2.hours >= 24 ||
        time2.minutes < 0 || time2.minutes >= 60 ||
        time2.seconds < 0 || time2.seconds >= 60) {
        cout << "Invalid time input!\n";
        return 1;
    }


    cout << "Total seconds in the first time: " << time1.toSeconds() << endl;


    Time sum = time1.addTime(time2);
    cout << "Sum of times: " << sum.hours << " hours, " << sum.minutes << " minutes, " << sum.seconds << " seconds." << endl;

    Time diff = time1.subtractTime(time2);
    cout << "Difference of times: " << diff.hours << " hours, " << diff.minutes << " minutes, " << diff.seconds << " seconds." << endl;

    return 0;
}
