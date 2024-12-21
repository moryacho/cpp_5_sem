#include <iostream>
using namespace std;

int transpositionSearch(int arr[], int size, int key) {
    if (size <= 0) {
        return -1;
    }

    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {

            if (i > 0) {
                swap(arr[i], arr[i - 1]);
            }
            return i - 1;
        }
    }
    return -1;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = { 10, 20, 30, 40, 50, 60, 70 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "Enter a value to search for: ";
    cin >> key;


    int index = transpositionSearch(arr, size, key);

    if (index != -1) {
        cout << "Element " << key << " found at index " << index << endl;
        cout << "Modified array: ";
        printArray(arr, size);
    }
    else {
        cout << "Element " << key << " not found in the array." << endl;
    }

    return 0;
}
