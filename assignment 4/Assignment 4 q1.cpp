#include <iostream>
using namespace std;

const int MAX = 1000;
int q[MAX];
int frontIdx = 0, rearIdx = -1;

bool isEmpty() {
    return frontIdx > rearIdx;
}

bool isFull() {
    return (rearIdx - frontIdx + 1) == MAX;
}

void enqueue(int x) {
    if (!isFull()) {
        q[++rearIdx] = x;
    }
}

int dequeue() {
    if (isEmpty()) return -1;
    return q[frontIdx++];
}

int peek() {
    if (isEmpty()) return -1;
    return q[frontIdx];
}

void display() {
    if (isEmpty()) {
        cout << "Queue is empty\n";
        return;
    }
    for (int i = frontIdx; i <= rearIdx; i++) {
        cout << q[i] << " ";
    }
    cout << "\n";
}

int main() {
    int choice, x;
    while (true) {
        cout << "\n1. Enqueue\n2. Dequeue\n3. isEmpty\n4. isFull\n5. Display\n6. Peek\n0. Exit\n";
        cin >> choice;

        if (choice == 0) break;
        else if (choice == 1) {
            cin >> x;
            if (isFull()) cout << "Queue Full\n";
            else enqueue(x);
        }
        else if (choice == 2) {
            int val = dequeue();
            if (val == -1) cout << "Queue Empty\n";
            else cout << "Dequeued: " << val << "\n";
        }
        else if (choice == 3) cout << (isEmpty() ? "Empty\n" : "Not Empty\n");
        else if (choice == 4) cout << (isFull() ? "Full\n" : "Not Full\n");
        else if (choice == 5) display();
        else if (choice == 6) {
            int val = peek();
            if (val == -1) cout << "Queue Empty\n";
            else cout << "Front: " << val << "\n";
        }
    }
    return 0;
}
