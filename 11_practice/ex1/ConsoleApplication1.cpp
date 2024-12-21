#include <iostream>
#include <locale>
#include <codecvt>

using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
    // Конструктор по умолчанию
    Distance() : feet(0), inches(0.0) { }

    // Конструктор с двумя параметрами
    Distance(int ft, float in) : feet(ft), inches(in) { }

    void getdist() {
        wcout << L"\nВведите число футов: ";
        cin >> feet;
        wcout << L"\nВведите число дюймов: ";
        cin >> inches;
    }

    void showdist() const {
        wcout << feet << L"'-" << inches << L"\"\n";
    }

    Distance operator+ (const Distance& d2) const {
        int f = feet + d2.feet;
        float i = inches + d2.inches;
        if (i >= 12.0) {
            i -= 12.0;
            f++;
        }
        return Distance(f, i);
    }

    friend Distance operator- (const Distance& d1, const Distance& d2) {
        int f = d1.feet - d2.feet;
        float i = d1.inches - d2.inches;
        if (i < 0) {
            i += 12.0;
            f--;
        }
        return Distance(f, i);
    }

    friend wostream& operator<< (wostream& out, const Distance& dist) {
        out << dist.feet << L"'-" << dist.inches << L"\"";
        return out;
    }
};

int main() {
    // Установим локаль для русского языка
    setlocale(LC_ALL, "Russian");

    Distance dist1, dist2, dist3, dist4;

    dist1.getdist();
    dist2.getdist();

    // Проверка перегруженного оператора сложения
    dist3 = dist1 + dist2;

    // Проверка цепочки операций
    dist4 = dist1 + dist2 + dist3;

    // Отображение значений на экране с помощью перегруженного оператора
    wcout << L"\ndist1 = " << dist1;
    wcout << L"\ndist2 = " << dist2;
    wcout << L"\ndist3 = " << dist3;
    wcout << L"\ndist4 = " << dist4;

    // Проверка оператора вычитания
    Distance dist5 = dist1 - dist2;
    wcout << L"\ndist5 (dist1 - dist2) = " << dist5;

    return 0;
}
