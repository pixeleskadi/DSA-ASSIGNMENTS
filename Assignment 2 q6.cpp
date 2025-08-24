//part a
#include <iostream>
using namespace std;
int main() {
    int m, n, t;
    cin >> m >> n >> t;
    int A[100][3];
    for (int i=0; i<t; i++) cin >> A[i][0] >> A[i][1] >> A[i][2];

    int B[100][3];
    B[0][0] = n;
    B[0][1] = m;
    B[0][2] = t;

    int k=1;
    for (int i=0; i<n; i++) {
        for (int j=0; j<t; j++) {
            if (A[j][1]==i) {
                B[k][0] = A[j][1];
                B[k][1] = A[j][0];
                B[k][2] = A[j][2];
                k++;
            }
        }
    }

    for (int i=0; i<=t; i++)
        cout << B[i][0] << " " << B[i][1] << " " << B[i][2] << endl;
}


// part b
// #include <iostream>
// using namespace std;
// int main() {
//     int m, n, t1, t2;
//     cin >> m >> n >> t1;
//     int A[100][3];
//     for (int i=0; i<t1; i++) cin >> A[i][0] >> A[i][1] >> A[i][2];

//     cin >> t2;
//     int B[100][3];
//     for (int i=0; i<t2; i++) cin >> B[i][0] >> B[i][1] >> B[i][2];

//     int C[200][3], k=0;
//     int i=0, j=0;
//     while(i<t1 && j<t2) {
//         if(A[i][0]<B[j][0] || (A[i][0]==B[j][0] && A[i][1]<B[j][1]))
//             {C[k][0]=A[i][0]; C[k][1]=A[i][1]; C[k][2]=A[i][2]; i++; k++;}
//         else if(B[j][0]<A[i][0] || (B[j][0]==A[i][0] && B[j][1]<A[i][1]))
//             {C[k][0]=B[j][0]; C[k][1]=B[j][1]; C[k][2]=B[j][2]; j++; k++;}
//         else
//             {C[k][0]=A[i][0]; C[k][1]=A[i][1]; C[k][2]=A[i][2]+B[j][2]; i++; j++; k++;}
//     }
//     while(i<t1){C[k][0]=A[i][0]; C[k][1]=A[i][1]; C[k][2]=A[i][2]; i++; k++;}
//     while(j<t2){C[k][0]=B[j][0]; C[k][1]=B[j][1]; C[k][2]=B[j][2]; j++; k++;}

//     for(int x=0;x<k;x++) cout << C[x][0] << " " << C[x][1] << " " << C[x][2] << endl;
// }


// part c
// #include <iostream>
// using namespace std;
// int main() {
//     int m1,n1,t1;
//     cin >> m1 >> n1 >> t1;
//     int A[100][3];
//     for(int i=0;i<t1;i++) cin >> A[i][0] >> A[i][1] >> A[i][2];

//     int m2,n2,t2;
//     cin >> m2 >> n2 >> t2;
//     int B[100][3];
//     for(int i=0;i<t2;i++) cin >> B[i][0] >> B[i][1] >> B[i][2];

//     if(n1!=m2){cout<<"Multiplication not possible"; return 0;}

//     int C[100][3], k=0;
//     for(int i=0;i<t1;i++){
//         for(int j=0;j<t2;j++){
//             if(A[i][1]==B[j][0]){
//                 int r = A[i][0];
//                 int c = B[j][1];
//                 int val = A[i][2]*B[j][2];
//                 int found = -1;
//                 for(int l=0;l<k;l++){
//                     if(C[l][0]==r && C[l][1]==c){C[l][2]+=val; found=l; break;}
//                 }
//                 if(found==-1){C[k][0]=r; C[k][1]=c; C[k][2]=val; k++;}
//             }
//         }
//     }

//     for(int i=0;i<k;i++) cout << C[i][0] << " " << C[i][1] << " " << C[i][2] << endl;
// }
