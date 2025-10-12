#include <iostream>
using namespace std;

int A[50][50];
int k, l;
int main(){
int sum;
cout<<"How long and wide would you like the matrix to be?\n";
cin>>k>>l;
for(int i = 0; i<k; i++){
    for(int j = 0; j<l; j++){
        cin>>A[i][j];
    }
    cout<<endl;
}
sum = 0;    
for(int i = 0; i<k; i++){
    for(int j = 0; j<l; j++){
        sum += A[i][j];
    }
    cout<<"sum of column "<<i<<" is "<<sum<<endl;
}
sum = 0;
for(int j = 0; j<k; j++){
    for(int i = 0; i<l; i++){
        sum += A[i][j];
    }
    cout<<"sum of column "<<j<<" is "<<sum<<endl;
}
}