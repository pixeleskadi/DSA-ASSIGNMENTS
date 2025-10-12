#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int freq[256] = {0};
    char q[1000];
    int front = 0, rear = -1;

    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        freq[c]++;
        q[++rear] = c;

        while (front <= rear && freq[q[front]] > 1) front++;

        if (front > rear) cout << -1 << " ";
        else cout << q[front] << " ";
    }
    cout << "\n";
    return 0;
}
