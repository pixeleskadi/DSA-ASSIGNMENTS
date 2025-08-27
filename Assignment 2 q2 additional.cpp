#include <iostream>
using namespace std;

bool canSplit(string s) {
    int freq[26] = {0};

    for (int i = 0; i < s.length(); i++) {
        freq[s[i] - 'a']++;
        if (freq[s[i] - 'a'] >= 3) {
            return true;
        }
    }
    return false;
}

int main() {
    string s;
    cin >> s;

    if (canSplit(s))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}