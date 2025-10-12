#include <iostream>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;
    int *a = new int[n];
    for (int i = 0; i < n; ++i) cin >> a[i];
    int *st = new int[n];
    int top = -1;
    int *res = new int[n];
    for (int i = n - 1; i >= 0; --i) {
        while (top >= 0 && st[top] <= a[i]) --top;
        if (top == -1) res[i] = -1;
        else res[i] = st[top];
        st[++top] = a[i];
    }
    for (int i = 0; i < n; ++i) {
        if (i) cout << ' ';
        cout << res[i];
    }
    cout << '\n';
    delete[] a; delete[] st; delete[] res;
    return 0;
}
