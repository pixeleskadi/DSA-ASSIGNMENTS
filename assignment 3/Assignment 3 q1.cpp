#include<iostream>
using namespace std;

float K[50];
int n;

void push(){
int stacval;
cout<<"give an element to stack\n";
cin>>stacval;
for(int i = 0; i<50; i++){
  if(K[i]==1.1){
    int stacvalin = stacval;
    K[i]=stacvalin;
    cout<<"The value is atcaked at "<<i<<" and above "<<i-1<<" which is "<<K[i-1]<<endl;
    break;
  }
}
}
void pop(){
for(int i = 0; i<50; i++){
  if(K[i]==1.1){
    K[i-1]=1.1;
    cout<<"The value is poped at "<<i<<" index and above "<<i-2<<" which is "<<K[i-2]<<endl;
    break;
  }
}  
}
void isEmpty(){
if(K[0] == 1.1){
    cout<<"true";
} else {
    cout<<"flase";
}
}
void isFull(){
if(K[n-1] != 1.1){
    cout<<"true";
} else {
    cout<<"flase";
}
}
void display(){
for(int i= 0; i<n-1; i++){
 if(K[i] != 1.1){
    cout<<K[i]<<endl;
} else {
    break;
}   
}
}
void peek(){
for(int i= 0; i<n-1; i++){
 if(K[i] == 1.1){
    cout<<K[i-1]<<endl;
} else {
    break;
}   
}
}
int main(){
cout<<"Let's start out by creating a stack.\nHow big do you want your stack to be?]\n";
cin>>n;
for (int i = 0; i<n; i++){
    K[i] = 1.1;
}
cout<<"Here are the functions that you can perform\n";
 int numcheck;
do
{
cin>>numcheck;
 if(numcheck<0||numcheck>7){
    cout<<"Please enter a valid input\n";
 }else{

    cout<<"Please give an input\n";
    switch (numcheck){
    case 0: push();
            break;
    case 1: pop();
            break;
    case 2: isEmpty();
            break;
    case 3: isFull();
            break;
    case 4: display();
            break;
    case 5: peek();
            break;
        }
    }
}
while(numcheck != 6);
}