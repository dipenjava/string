#include <iostream>
#include <string>

using namespace std;

void reverseWords( string s) {
    string word;
    string reversedStr;

    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] != ' ') {
            // Build the word in reverse order
            word = s[i] + word;
        } else {
            // Add the word to the reversed string
            reversedStr += word;
            reversedStr += ' ';
            word = "";
        }
    }

    // Add the last word to the reversed string
    reversedStr += word;

    // Print the reversed string
    cout << reversedStr << endl;
}

int main() {
    string s = "i like this program very much";
    reverseWords(s);

    return 0;
}
