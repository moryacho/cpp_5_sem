#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 4) {
        cerr << "Error: Not enough arguments provided." << endl;
        return 1;
    }

    if (strncmp(argv[1], "-a", 2) == 0) {
        int num1 = atoi(argv[2]);
        int num2 = atoi(argv[3]);
        int sum = num1 + num2;
        cout << "Sum: " << sum << endl;
    }
    else if (strncmp(argv[1], "-m", 2) == 0) {
        int num1 = atoi(argv[2]);
        int num2 = atoi(argv[3]);
        int product = num1 * num2;
        cout << "Product: " << product << endl;
    }
    else {
        cerr << "Error: Invalid flag. Use -a for addition or -m for multiplication." << endl;
        return 1;
    }

    return 0;
}
