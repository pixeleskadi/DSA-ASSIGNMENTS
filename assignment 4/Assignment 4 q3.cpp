#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[1000];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int half = n / 2;
    int res[1000], idx = 0;

    for (int i = 0; i < half; i++) {
        res[idx++] = arr[i];
        res[idx++] = arr[half + i];
    }

    if (n % 2 == 1) res[idx++] = arr[n - 1];

    for (int i = 0; i < n; i++) {
        cout << res[i] << " ";
    }
    cout << "\n";
    return 0;
}
