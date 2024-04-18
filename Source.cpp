#include <iostream>
#include <string>

using namespace std;

int count_letters(const string& str) {
    int count = 0;
    for (char c : str) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            count++;
        }
    }
    return count;
}

int count_words(const string& str) {
    int count = 0;
    bool in_word = false;
    for (char c : str) {
        if (c == ' ') {
            if (in_word) {
                count++;
                in_word = false;
            }
        }
        else {
            in_word = true;
        }
    }
    // If the last character was part of a word, increment count
    if (in_word) {
        count++;
    }
    return count;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    int letter_count = count_letters(input);
    int word_count = count_words(input);
    cout << "Number of letters: " << letter_count << endl;
    cout << "Number of words: " << word_count << endl;
    return 0;
}
