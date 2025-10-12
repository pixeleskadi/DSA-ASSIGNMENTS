#include <iostream>
using namespace std;

struct Queue {
    int arr[1000];
    int f = 0, r = -1, sz = 0;

    void enqueue(int x) { arr[++r] = x; sz++; }
    int dequeue() { if (sz == 0) return -1; sz--; return arr[f++]; }
    int front() { return (sz == 0) ? -1 : arr[f]; }
    bool empty() { return sz == 0; }
    int size() { return sz; }
};

// (a) Using two queues
struct StackTwoQ {
    Queue q1, q2;

    void push(int x) { q1.enqueue(x); }
    int pop() {
        if (q1.empty()) return -1;
        while (q1.size() > 1) q2.enqueue(q1.dequeue());
        int topVal = q1.dequeue();
        while (!q2.empty()) q1.enqueue(q2.dequeue());
        return topVal;
    }
    int top() {
        if (q1.empty()) return -1;
        while (q1.size() > 1) q2.enqueue(q1.dequeue());
        int topVal = q1.front();
        q2.enqueue(q1.dequeue());
        while (!q2.empty()) q1.enqueue(q2.dequeue());
        return topVal;
    }
};

// (b) Using one queue
struct StackOneQ {
    Queue q;

    void push(int x) {
        q.enqueue(x);
        for (int i = 0; i < q.size() - 1; i++) q.enqueue(q.dequeue());
    }
    int pop() { return q.dequeue(); }
    int top() { return q.front(); }
};

int main() {
    StackTwoQ st2;
    StackOneQ st1;

    st2.push(10);
    st2.push(20);
    cout << "StackTwoQ pop: " << st2.pop() << "\n";

    st1.push(30);
    st1.push(40);
    cout << "StackOneQ top: " << st1.top() << "\n";

    return 0;
}
