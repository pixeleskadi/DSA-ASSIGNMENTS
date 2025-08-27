//part a
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int A[100];
    for (int i=0; i<n; i++) cin >> A[i];
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i==j) cout << A[i] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
}

// part b
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int A[300];
//     for (int i=0; i<3*n-2; i++) cin >> A[i];
//     int k=0;
//     for (int i=0; i<n; i++) {
//         for (int j=0; j<n; j++) {
//             if (i==j) cout << A[n-1+i] << " ";
//             else if (i-j==1) cout << A[i-1] << " ";
//             else if (j-i==1) cout << A[2*n-1+i] << " ";
//             else cout << 0 << " ";
//         }
//         cout << endl;
//     }
// }

//part c
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int A[1000];
//     int len = n*(n+1)/2;
//     for (int i=0; i<len; i++) cin >> A[i];
//     int k=0;
//     for (int i=1; i<=n; i++) {
//         for (int j=1; j<=n; j++) {
//             if (i>=j) cout << A[i*(i-1)/2 + (j-1)] << " ";
//             else cout << 0 << " ";
//         }
//         cout << endl;
//     }
// }

//part d
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int A[1000];
//     int len = n*(n+1)/2;
//     for (int i=0; i<len; i++) cin >> A[i];
//     for (int i=1; i<=n; i++) {
//         for (int j=1; j<=n; j++) {
//             if (i<=j) cout << A[i*(2*n-i+1)/2 + (j-i)] << " ";
//             else cout << 0 << " ";
//         }
//         cout << endl;
//     }
// }


//part e
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int A[1000];
//     int len = n*(n+1)/2;
//     for (int i=0; i<len; i++) cin >> A[i];
//     for (int i=1; i<=n; i++) {
//         for (int j=1; j<=n; j++) {
//             if (i>=j) cout << A[i*(i-1)/2 + (j-1)] << " ";
//             else cout << A[j*(j-1)/2 + (i-1)] << " ";
//         }
//         cout << endl;
//     }
// }
