#include <iostream>
using namespace std;

const int MAX = 1000;
int cq[MAX];
int frontC = 0, rearC = -1, sizeC = 0, capC;

bool isEmptyC() { return sizeC == 0; }
bool isFullC() { return sizeC == capC; }

void enqueueC(int x) {
    if (!isFullC()) {
        rearC = (rearC + 1) % capC;
        cq[rearC] = x;
        sizeC++;
    }
}

int dequeueC() {
    if (isEmptyC()) return -1;
    int val = cq[frontC];
    frontC = (frontC + 1) % capC;
    sizeC--;
    return val;
}

int peekC() {
    if (isEmptyC()) return -1;
    return cq[frontC];
}

void displayC() {
    if (isEmptyC()) {
        cout << "Circular Queue is empty\n";
        return;
    }
    int idx = frontC;
    for (int i = 0; i < sizeC; i++) {
        cout << cq[idx] << " ";
        idx = (idx + 1) % capC;
    }
    cout << "\n";
}

int main() {
    cout << "Enter capacity of circular queue: ";
    cin >> capC;

    int choice, x;
    while (true) {
        cout << "\n1. Enqueue\n2. Dequeue\n3. isEmpty\n4. isFull\n5. Display\n6. Peek\n0. Exit\n";
        cin >> choice;

        if (choice == 0) break;
        else if (choice == 1) {
            cin >> x;
            if (isFullC()) cout << "Queue Full\n";
            else enqueueC(x);
        }
        else if (choice == 2) {
            int val = dequeueC();
            if (val == -1) cout << "Queue Empty\n";
            else cout << "Dequeued: " << val << "\n";
        }
        else if (choice == 3) cout << (isEmptyC() ? "Empty\n" : "Not Empty\n");
        else if (choice == 4) cout << (isFullC() ? "Full\n" : "Not Full\n");
        else if (choice == 5) displayC();
        else if (choice == 6) {
            int val = peekC();
            if (val == -1) cout << "Queue Empty\n";
            else cout << "Front: " << val << "\n";
        }
    }
    return 0;
}
