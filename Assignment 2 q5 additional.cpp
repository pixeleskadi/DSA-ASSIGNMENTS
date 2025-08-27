#include <iostream>
using namespace std;

void duplicateTwos(int arr[], int n) {
    int countTwo = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 2) countTwo++;
    }

    int i = n - 1;
    int j = n + countTwo - 1;  

    while (i >= 0 && j >= 0) {
        if (arr[i] == 2) {
            if (j < n) arr[j] = 2;
            j--;
            if (j < n) arr[j] = 2;
            j--;
        } else {
            if (j < n) arr[j] = arr[i];
            j--;
        }
        i--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    duplicateTwos(arr, n);

    cout << "Modified Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}