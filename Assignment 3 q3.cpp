#include<iostream>
using namespace std;
int main(){
  char C[1000];
  cin.getline(C, 1000);
  int length = 0;
  while(C[length] != '\0'){
    length++;
  }
  int r = 0;
  int s = 0;
  int c = 0;
  int which_came_last[1000];
  int k = 0;
  for(int i = 0; i<length; i++){
    if(C[i]=='('){
      r++;
      //1
      which_came_last[k] = 1;
      k++;
    }
    if(C[i]=='['){
      s++;
      //2 
      which_came_last[k] = 2;
      k++;

    }
    if(C[i]=='{'){
      c++;
      //3
      which_came_last[k] = 3;
      k++;
    }
    if(C[i]==')'){
        if(k>0 && which_came_last[k-1]==1){
        r--;
        which_came_last[k-1] = 0;
        k--;
      } else if(which_came_last[k-1] == 2 || which_came_last[k-1] == 3){
        cout<<"this equation is not okay\n";
        break;
      }
    }
    if(C[i]==']'){
        if(k>0 && which_came_last[k-1]==2){
        s--;
        which_came_last[k-1] = 0;
        k--;
      } else if(which_came_last[k-1] == 1 || which_came_last[k-1] == 3){
        cout<<"this equation is not okay\n";
        break;
      }
      
    }
    if(C[i]=='}'){
        if(k>0 && which_came_last[k-1]==3){
        c--;
        which_came_last[k-1] = 0;
        k--;
      } else if(which_came_last[k-1] == 1 || which_came_last[k-1] == 2){
        cout<<"this equation is not okay\n";
        break;
      }
    }
  }

  if (r == 0 && s == 0 && c == 0 && k==0){
    cout<<"this equation is okay\n";
  } else {
    cout<<"this equation is not okay\n";
  }
}