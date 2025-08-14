#include <iostream>
using namespace std;

int A[100];
int k;

void Create(){
    cout<<"give a size of array u want\n";
    cin>>k;
    for(int i = 0;i<k;i++){
        cin>>A[i];
    }
}

void Display(){
    for(int i = 0; i<k; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

void Insert(){
    int insNumLoc;
    int insNum;
    cout<<"In what index do you want to insert a number?\n";
    cin>>insNumLoc;
    cout<<"And number would that be dear?\n";
    cin>>insNum;
    k++;
    for(int i = k; i>insNumLoc; i--){
        A[i] = A[i-1];
    }
    A[insNumLoc] = insNum;
}

void Delete(){
    int delNumLoc;
    k--;
    cout<<"What do index do you want to delete?\n";
    cin>>delNumLoc;
    for(int i = delNumLoc; i<=k; i++){
        A[i] =A[i+1]; 
    }
} 

void Linear_Search(){
    int numSerVal;
    int numLoc;
    bool numChe;
    cout<<"What number do u want to search?\n";
    cin>>numSerVal;
    cout<<"Do you want the index location of that number?\n";
    cin>>numChe;
    for (int i = 0; i<k; i++){
        if (A[i]==numSerVal){
            cout<<"The number "<<numSerVal<<" is in the array\n";
            numLoc=i;
            if (numChe==1){
                cout<<"The index of the number that you requested "<<numLoc<<endl;
            }
        } else {
            cout<<"The number "<<numSerVal<<" is not in this array";
        }
    }
}

void Delete_Duplicates(){
    for(int i = 0; i<k; i++){
        for(int j = i + 1; j<k; j){
            if (A[i] == A[j]) {
                for (int x = j; x < k - 1; x++) {
                    A[x] = A[x + 1];
                }
                k--;
            } else {
                j++;
            }
        }
    }
}

int main(){
    
    int n;

    do{
    cout<<"CREATE(0)\n";
    cout<<"DISPLAY(1)\n";
    cout<<"INSERT(2)\n";
    cout<<"DELETE(3)\n";
    cout<<"LINEAR SEARCH(4)\n";
    cout<<"DELETE DUPLICATE ITEMS(5)\n";
    cout<<"EXIT(6)\n";

    cout<<"Please enter a number to do the action\n";
    cin>>n;

    switch (n){
        case 0:
        Create();
        break;
        case 1:
        Display();
        break;
        case 2:
        Insert();
        break;
        case 3:
        Delete();
        break;
        case 4:
        Linear_Search();
        break;
        case 5:
        Delete_Duplicates();
        break;
        case 6:
        break;
    }
    } while (n!=6);
}