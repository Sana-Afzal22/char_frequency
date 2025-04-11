#include <iostream>
using namespace std;

int main() {
    string sentence = "We are going to Lahore";
    int freq[256] = {0}; // For all ASCII characters

    for (char c : sentence) {
        if (c != ' ') {
            freq[c]++;
        }
    }

    cout << "Character Frequencies:\n";
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            cout << char(i) << " => " << freq[i] << endl;
        }
    }

    return 0;
}