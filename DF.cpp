#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;  // Read the number of words

    for (int i = 0; i < n; ++i) {
        string word;
        cin >> word;  // Read each word

        if (word.length() > 10) {
            // Create the abbreviation
            string abbreviation = word[0] + to_string(word.length() - 2) + word[word.length() - 1];
            cout << abbreviation << endl;
        } else {
            // If the word length is 10 or less, print it as is
            cout << word << endl;
        }
    }

    return 0;
}
