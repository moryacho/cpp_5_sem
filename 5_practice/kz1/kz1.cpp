#include <iostream>
using namespace std;

int calculateSum(int size, int arr[]) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

double calculateAverage(int sum, int size) {
    return static_cast<double>(sum) / size;
}

void calculateSums(int size, int arr[], int& sum_neg, int& sum_pos, int& sum_odd, int& sum_even) {
    sum_neg = sum_pos = sum_odd = sum_even = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            sum_neg += arr[i];
        }
        if (arr[i] > 0) {
            sum_pos += arr[i];
        }
        if (i % 2 != 0) {
            sum_odd += arr[i];
        }
        if (i % 2 == 0) {
            sum_even += arr[i];
        }
    }
}

void findMaxMin(int size, int arr[], int& max_val, int& max_index, int& min_val, int& min_index) {
    max_val = min_val = arr[0];
    max_index = min_index = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
            max_index = i;
        }
        if (arr[i] < min_val) {
            min_val = arr[i];
            min_index = i;
        }
    }
}

int calculateProductBetween(int arr[], int max_index, int min_index) {
    int product = 1;
    bool hasElements = false;

    if (max_index > min_index) {
        for (int i = min_index + 1; i < max_index; i++) {
            product *= arr[i];
            hasElements = true;
        }
    }
    else {
        for (int i = max_index + 1; i < min_index; i++) {
            product *= arr[i];
            hasElements = true;
        }
    }
    return hasElements ? product : 0;
}

    int main() {
        const int n = 10;
        int mass[n];

        for (int i = 0; i < n; i++) {
            cout << "Input number for mass: ";
            cin >> mass[i];
        }

        int sum = calculateSum(n, mass);
        cout << "Sum of elements: " << sum << endl;
        double average = calculateAverage(sum, n);
        cout << "Average of elements: " << average << endl;

        int sum_neg, sum_pos, sum_odd, sum_even;
        calculateSums(n, mass, sum_neg, sum_pos, sum_odd, sum_even);
        cout << "Sum of negative elements: " << sum_neg << endl;
        cout << "Sum of positive elements: " << sum_pos << endl;
        cout << "Sum of elements at odd indices: " << sum_odd << endl;
        cout << "Sum of elements at even indices: " << sum_even << endl;

        int max_val, min_val, max_index, min_index;
        findMaxMin(n, mass, max_val, max_index, min_val, min_index);
        cout << "Max element: " << max_val << " (index " << max_index << ")" << endl;
        cout << "Min element: " << min_val << " (index " << min_index << ")" << endl;

        int product = calculateProductBetween(mass, max_index, min_index);
        if (product != 0) {
            cout << "Product of elements between max and min: " << product << endl;
        }
        else {
            cout << "No elements between max and min." << endl;
        }

        return 0;
    }
