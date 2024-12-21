#include <iostream>
#include <ctime>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
    srand(time(NULL));
    int k = 0;
    const int n = 10;
    int mas[n];

    vector<int> v1;
    vector<int> v2;

    for (int i = 0; i < n; ++i) {
        int multiplier1 = rand() % 10 + 1;
        int multiplier2 = rand() % 10 + 1;

        int correctAnswer = multiplier1 * multiplier2;

        int userAnswer;
        cout << "Question " << (i + 1) << ": " << multiplier1 << " * " << multiplier2 << " = ";
        cin >> userAnswer;

        if (userAnswer != correctAnswer) {
            cout << "Incorrect! Correct answer: " << correctAnswer << endl;
            v2.push_back(userAnswer);
            k++;
        }
        else {
            cout << "Correct!" << endl;
            v1.push_back(userAnswer);
        }


        mas[i] = userAnswer;
    }

    cout << "\nAll: ";
    for (int i = 0; i < n; i++) {
        cout << mas[i] << " ";
    }
    cout << endl;

    cout << endl << "You answered incorrectly " << k << " questions from " << n << "." << endl;

    cout << "\nGood: ";
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;

    cout << "\nBad: ";
    for (int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " ";
    }
    cout << endl;

    sort(v2.begin(), v2.end());

    ofstream outFile("results.txt");
    if (!outFile) {
        cerr << "File could not be opened!" << endl;
        return 1;
    }

    outFile << "Original answers:\n";
    for (int i = 0; i < n; i++) {
        outFile << mas[i] << " ";
    }
    outFile << "\n\nSorted incorrect answers:\n";

    for (int i = 0; i < v2.size(); i++) {
        outFile << v2[i] << " ";
    }

    outFile.close();
    cout << "\nResults have been written to results.txt.\n";

    return 0;
}
