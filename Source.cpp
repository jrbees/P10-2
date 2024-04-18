//Sending to github

#include <iostream>
#include <string>

using namespace std;

// here pt 1
int count_letters(const string& str) {
    int count = 0;
    for (char c : str) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            count++;
        }
    }
    return count;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    int letter_count = count_letters(input);
    cout << "Number of letters: " << letter_count << endl;
    return 0;
}
