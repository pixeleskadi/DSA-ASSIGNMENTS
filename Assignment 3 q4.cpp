#include <iostream>
using namespace std;

#define MAX 1000

char stackArr[MAX];
int top = -1;

void push(char c) {
    if (top < MAX - 1) {
        stackArr[++top] = c;
    }
}

char pop() {
    if (top >= 0) {
        return stackArr[top--];
    }
    return '\0';
}

char peek() {
    if (top >= 0) return stackArr[top];
    return '\0';
}

bool isEmpty() {
    return top == -1;
}

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

int main() {
    char infix[MAX], postfix[MAX];
    cout << "Enter an infix expression: ";
    cin.getline(infix, MAX);

    int i = 0, k = 0;
    while (infix[i] != '\0') {
        char ch = infix[i];

        if ((ch >= 'a' && ch <= 'z') || 
            (ch >= 'A' && ch <= 'Z') || 
            (ch >= '0' && ch <= '9')) {
            postfix[k++] = ch;
        }
        else if (ch == '(') {
            push(ch);
        }
        else if (ch == ')') {
            while (!isEmpty() && peek() != '(') {
                postfix[k++] = pop();
            }
            pop();
        }
        else {
            while (!isEmpty() && precedence(peek()) >= precedence(ch)) {
                postfix[k++] = pop();
            }
            push(ch);
        }
        i++;
    }

    while (!isEmpty()) {
        postfix[k++] = pop();
    }

    postfix[k] = '\0';

    cout << "Postfix expression: " << postfix << endl;

    return 0;
}
