#include <iostream>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;
    int *A = new int[n];
    for (int i = 0; i < n; ++i) cin >> A[i];
    int *B = new int[n];
    for (int i = 0; i < n; ++i) B[i] = A[i];
    // simple selection sort to get sorted target (ascending)
    for (int i = 0; i < n; ++i) {
        int idx = i;
        for (int j = i+1; j < n; ++j) if (B[j] < B[idx]) idx = j;
        if (idx != i) {
            int t = B[i]; B[i] = B[idx]; B[idx] = t;
        }
    }
    int *st = new int[n];
    int top = -1;
    int iA = 0, iB = 0;
    while (iA < n) {
        st[++top] = A[iA++];
        while (top >= 0 && st[top] == B[iB]) {
            --top; ++iB;
        }
    }
    while (top >= 0 && st[top] == B[iB]) { --top; ++iB; }
    if (iB == n) cout << "YES\n"; else cout << "NO\n";
    delete[] A; delete[] B; delete[] st;
    return 0;
}
