#include <iostream>;

using namespace std;

int main() {
    const int n = 10;
    int mass[n];
    for (int i = 0; i < n; i++) {
        cout << "Input number for mass" << endl;
        cin >> mass[i];
    }
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += mass[i];
    }
    cout << "Sum element: " << s << endl;

    double average = s / n;
    cout << "Average element: " << average << endl;

    int sum_neg = 0, sum_pos = 0, sum_odd = 0, sum_even = 0;

    for (int i = 0; i < n; i++) {
        if (mass[i] < 0) {
            sum_neg += mass[i];
        }
        if (mass[i] > 0) {
            sum_pos += mass[i];
        }
        if (i % 2 != 0) {
            sum_odd += mass[i];
        }
        if (i % 2 == 0) {
            sum_even += mass[i];
        }
    }

    cout << "Sum negative element: " << sum_neg << endl;
    cout << "Sum positive element: " << sum_pos << endl;
    cout << "Sum odd index element: " << sum_odd << endl;
    cout << "Sum even index element: " << sum_even << endl;


    int max_index = 0, min_index = 0;
    int max_val = mass[0], min_val = mass[0];

    for (int i = 1; i < n; i++) {
        if (mass[i] > max_val) {
            max_val = mass[i];
            max_index = i;
        }
        if (mass[i] < min_val) {
            min_val = mass[i];
            min_index = i;
        }
    }

    cout << "Max element: " << max_val << " (index " << max_index << ")" << endl;
    cout << "Min element: " << min_val << " (index " << min_index << ")" << endl;

    int product = 1;
    if (max_index > min_index) {
        for (int i = min_index + 1; i < max_index; i++) {
            product *= mass[i];
        }
    }
    else {
        for (int i = max_index + 1; i < min_index; i++) {
            product *= mass[i];
        }
    }

    cout << product << endl;

    return 0;

}