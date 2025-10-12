#include <iostream>
using namespace std;

struct Stack {
    int *arr;
    int top;
    int cap;
};

void initStack(Stack &s, int capacity) {
    s.arr = new int[capacity];
    s.top = -1;
    s.cap = capacity;
}

bool isEmpty(const Stack &s) {
    return s.top == -1;
}

void push(Stack &s, int x) {
    if (s.top + 1 < s.cap) s.arr[++s.top] = x;
}

void pop(Stack &s) {
    if (!isEmpty(s)) s.top--;
}

int topElement(const Stack &s) {
    if (isEmpty(s)) return -1;
    return s.arr[s.top];
}

void destroyStack(Stack &s) {
    delete[] s.arr;
    s.arr = nullptr;
    s.top = -1;
    s.cap = 0;
}

int main() {
    int n;
    cin >> n;
    int *A = new int[n];
    for (int i = 0; i < n; ++i) cin >> A[i];

    Stack st;
    initStack(st, n);

    for (int i = 0; i < n; ++i) {
        while (!isEmpty(st) && topElement(st) >= A[i]) pop(st);
        if (isEmpty(st)) cout << -1;
        else cout << topElement(st);
        if (i + 1 < n) cout << " ";
        push(st, A[i]);
    }
    cout << "\n";

    destroyStack(st);
    delete[] A;
    return 0;
}

