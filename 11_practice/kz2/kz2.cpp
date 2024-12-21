#include <iostream>
#include <cmath> 
#include <vector>
#include <algorithm> 

class Point {
private:
    double x;
    double y;

public:
    // Конструктор с параметрами
    Point(double x, double y) : x(x), y(y) { }

    // Метод для расчета расстояния до центра координат
    double distanceToCenter() const {
        return std::sqrt(x * x + y * y);
    }

    // Перегрузка оператора << для вывода точки
    friend std::ostream& operator<<(std::ostream& out, const Point& point) {
        out << "Point(" << point.x << ", " << point.y << ")";
        return out;
    }

    // Перегрузка оператора < для сравнения по расстоянию до центра
    bool operator<(const Point& other) const {
        return distanceToCenter() < other.distanceToCenter();
    }
};

int main() {
    std::vector<Point> v;
    v.push_back(Point(1, 2));
    v.push_back(Point(10, 12));
    v.push_back(Point(21, 7));
    v.push_back(Point(4,8));
    std::sort(v.begin(), v.end());

    for (const auto& point : v) {
        std::cout << point << '\n';
    }

    return 0;
}
