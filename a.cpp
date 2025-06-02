#include <iostream>

#include <sstream>

#include <cctype>

using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();

    while (T--) {
        string line;
        getline(cin, line);
        istringstream iss(line);
        string word;
        bool first = true;

        while (iss >> word) {
            bool is_acronym = true;
            for (char c: word) {
                if (!isupper(c)) {
                    is_acronym = false;
                    break;
                }
            }

            if (!first) cout << ' ';
            first = false;

            if (is_acronym) {
                cout << word;
            } else {
                word[0] = toupper(word[0]);
                for (int i = 1; i < word.length(); ++i) {
                    word[i] = tolower(word[i]);
                }
                cout << word;
            }
        }
        cout << '\n';
    }

    return 0;
}