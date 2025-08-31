#include<iostream>
using namespace std;

int main(){
  char P[1000];
  cout<<"Enter a string\n";
  cin.getline(P, 1000);
  int length = 0;
  while(P[length]!='\0'){
    length++;
  }
  int left = 0, right = length - 1;
  while(left < right){
    char temp = P[left];
        P[left] = P[right];
        P[right] = temp;
        
        left++;
        right--;
  }
  for(int i = 0; i<length; i++){
    cout<<P[i];
  }

}