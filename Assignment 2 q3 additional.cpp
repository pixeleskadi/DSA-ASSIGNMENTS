#include <iostream>
using namespace std;

bool areAnagrams(string str1, string str2) {
    if (str1.length() != str2.length())
        return false;

    int freq[26] = {0};

    for (int i = 0; i < str1.length(); i++) {
        freq[str1[i] - 'a']++;
    }

    for (int i = 0; i < str2.length(); i++) {
        freq[str2[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) return false;
    }

    return true;
}

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    if (areAnagrams(str1, str2))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
