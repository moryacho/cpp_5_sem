#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <numeric>

using namespace std;

const int MIN_X_Y_0 = -3;
const int MAX_X_Y_0 = 3;
const int R_FOR_10 = 1;
const int R_FOR_5 = 2;
const int R_FOR_1 = 3;
const int OPTION_FOR_1_POINT = 2;
const string X_OPTION = "x";
const string Y_OPTION = "y";
const string OPTION = "option";
const string OPTION_1 = "1";
const string OPTION_2 = "2";
const int COUNT_OF_ATTEMPTS = 5;
const int POINTS_TO_SUCCESS = 20;


int finalPlayerPoint = 0;

int InputCheck(const string& parameter);
vector<int> MakeShot();
int GetPoint(int option, const vector<int>& x_y, const vector<int>& x0_y0);
vector<int> GetCenter();

int main() {
    srand(static_cast<unsigned int>(time(0))); // Инициализация генератора случайных чисел
    bool isActive = true;
    int attempt_count = 0;

    while (isActive) {
        cout << "Hi, the best shooter in the world!\n"
            << "You need to have at least " << POINTS_TO_SUCCESS << " points to success!\n"
            //<< "You have " << COUNT_OF_ATTEMPTS << " attempts to hit the target!\n"
            << "Min x and y: " << MIN_X_Y_0 << "\n"
            << "Max x and y: " << MAX_X_Y_0 << "\n"
            << "The gun is a little old, so you have a little hindrance when shooting (-0.5, +0, +0.5)\n"
            << "After all of them u see points and can finish the game or play again!\n";

        int option = InputCheck(OPTION);
        vector<int> x0_y0 = GetCenter();
        //vector<int> points(COUNT_OF_ATTEMPTS);
        int points = 0;
        int attempt = 0;


        while (points < POINTS_TO_SUCCESS)
        {
            cout << "Attempt " << (attempt + 1) << endl;
            attempt += 1;
            attempt_count += 1;
            vector<int> x_y = MakeShot();
            points += GetPoint(option, x_y, x0_y0);
            cout << "Now you have " << points  << "/" << POINTS_TO_SUCCESS << " points\n";
        }


        cout << "You have achieved needed amount!!!!\n";


        finalPlayerPoint += points;

        cout << "Now you have " << finalPlayerPoint << " points\n";

        char ans;
        do {
            cout << "Would you like to continue the game (y/n): ";
            cin >> ans;
        } while (ans != 'y' && ans != 'n');

        if (ans == 'n') {
            isActive = false;
            //cout << finalPlayerPoint << " " << attempt_count << endl;
            double ratio = (double)finalPlayerPoint / (double)attempt_count;

            //cout << ratio << endl;

            if (ratio <= 3)
            {
                cout << "You are a noob! Bad shooting..." << endl;
            }
            else if (ratio <= 5)
            {
                cout << "Middle shooter! Good job!" << endl;
            }
            else
            {
                cout << "Super professional! The coolest shooter in the world!!!" << endl;
            }
        }
    }

    return 0;
}

int InputCheck(const string& parameter) {
    if (parameter == X_OPTION || parameter == Y_OPTION) {
        while (true) {
            cout << "Input " << parameter << ": ";
            int parInt;
            cin >> parInt;

            if (cin.fail() || parInt < MIN_X_Y_0 || parInt > MAX_X_Y_0) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            return parInt + (rand() % 3 - 1) / 2; // -1, 0 или +1
        }
    }

    if (parameter == OPTION) {
        while (true) {
            cout << "Input " << parameter << " (1 or 2): ";
            string parStr;
            cin >> parStr;

            if (parStr == OPTION_1) {
                return 1;
            }
            else if (parStr == OPTION_2) {
                return 2;
            }
        }
    }

    return MIN_X_Y_0 - 1;
}

vector<int> MakeShot() {
    int x = InputCheck(X_OPTION);
    int y = InputCheck(Y_OPTION);
    return { x, y };
}

int GetPoint(int option, const vector<int>& x_y, const vector<int>& x0_y0) {
    double rCurr = sqrt(pow(x_y[0] - x0_y0[0], 2) + pow(x_y[1] - x0_y0[1], 2));

    if (rCurr < R_FOR_10) {
        return 10;
    }
    else if (rCurr < R_FOR_5) {
        return 5;
    }
    if (option == OPTION_FOR_1_POINT && rCurr < R_FOR_1) {
        return 1;
    }
    return 0;
}

vector<int> GetCenter() {
    int x0 = rand() % (MAX_X_Y_0 - MIN_X_Y_0 + 1) + MIN_X_Y_0;
    int y0 = rand() % (MAX_X_Y_0 - MIN_X_Y_0 + 1) + MIN_X_Y_0;
    return { x0, y0 };
}
