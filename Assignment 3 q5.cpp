#include <iostream>
using namespace std;

#define MAX 1000

int stackArr[MAX];
int top = -1;

void push(int val) {
    if (top < MAX - 1) {
        stackArr[++top] = val;
    }
}

int pop() {
    if (top >= 0) {
        return stackArr[top--];
    }
    return 0;
}

int main() {
    char postfix[MAX];
    cout << "Enter a postfix expression (use spaces between numbers/operators): ";
    cin.getline(postfix, MAX);

    int i = 0;
    while (postfix[i] != '\0') {
        if (postfix[i] == ' ') {
            i++;
            continue;
        }

        if (postfix[i] >= '0' && postfix[i] <= '9') {
            int num = 0;
            while (postfix[i] >= '0' && postfix[i] <= '9') {
                num = num * 10 + (postfix[i] - '0');
                i++;
            }
            push(num);
        }
        else {
            int val2 = pop();
            int val1 = pop();
            if (postfix[i] == '+') push(val1 + val2);
            else if (postfix[i] == '-') push(val1 - val2);
            else if (postfix[i] == '*') push(val1 * val2);
            else if (postfix[i] == '/') push(val1 / val2);
            i++;
        }
    }

    cout << "Result: " << pop() << endl;
    return 0;
}
