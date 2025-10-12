#include <iostream>
using namespace std;
int A[50];
int k;

int SetArr(){
cout<<"How big do you want the array\n";
cin>>k;
for(int i = 0; i<k; i++){
    cout<<"give the "<<i<<" index number.\n";
    cin>>A[i];
}
}

int SortArr(){
    for (int i = 0; i < k - 1; i++) {
        for (int j = 0; j < k - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int BiSearArr(){
    int SearArrVal;
    
    int low = 0;
    int high = k - 1;
    bool found = false;

    cout<<"Give the number you want to search.\n";
    cin>>SearArrVal;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (A[mid] == SearArrVal) {
            cout << "The value " << SearArrVal << " is present in the array at index " << mid << "\n";
            found = true;
            break;
        }
        else if (A[mid] < SearArrVal) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
}

void ShowArr(){
    for(int i = 0; i<k; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int numin;
    
    do{
    cout<<"CREATE(0)\n";
    cout<<"DISPLAY(1)\n";
    cout<<"SORT ARRAY(2)\n";
    cout<<"BINARY SEARCH(3)\n";
    cout<<"EXIT(4)\n";

    cout<<"Please enter a number to do the action\n";
    cin>>numin;

    if(numin<0 || numin>4){

        if(numin==0){
            SetArr();
        }

        if(numin==1){
            ShowArr();
        }
        
        if(numin==2){
            SortArr();
        }

        if(numin==3){
            BiSearArr();
        }
    } else{

        cout<<"Please enter a valid response";
    
    }
} while (numin != 4);
    
}