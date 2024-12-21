#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream outFile("Text.txt");


    if (!outFile) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }

    string line;
    cout << "Enter your poem (type 'Q' to finish):" << endl;

    while (true) {
        getline(cin, line);
        if (line == "Q") {
            break;
        }
        outFile << line << endl;
    }

    outFile.close();
    cout << "Poem has been written to TextFile1.txt." << endl;

    return 0;
}
