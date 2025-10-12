#include <iostream>
using namespace std;

class MinStack {
    long long *arr;
    int sz;
    int cap;
    long long minVal;

    void ensure_capacity() {
        if (sz < cap) return;
        int newcap = (cap == 0) ? 4 : cap * 2;
        long long *b = new long long[newcap];
        for (int i = 0; i < sz; ++i) b[i] = arr[i];
        delete[] arr;
        arr = b;
        cap = newcap;
    }

public:
    MinStack() : arr(nullptr), sz(0), cap(0), minVal(0) {}

    ~MinStack() { delete[] arr; }

    bool empty() const { return sz == 0; }

    void push(long long x) {
        if (empty()) {
            ensure_capacity();
            arr[sz++] = x;
            minVal = x;
        } else {
            if (x >= minVal) {
                ensure_capacity();
                arr[sz++] = x;
            } else {
                ensure_capacity();
                long long encoded = 2LL * x - minVal;
                arr[sz++] = encoded;
                minVal = x;
            }
        }
    }

    bool pop() {
        if (empty()) return false;
        long long topv = arr[sz - 1];
        if (topv >= minVal) {
            --sz;
            return true;
        } else {
            long long prevMin = 2LL * minVal - topv;
            minVal = prevMin;
            --sz;
            return true;
        }
    }

    bool top(long long &out) const {
        if (empty()) return false;
        long long topv = arr[sz - 1];
        if (topv >= minVal) out = topv;
        else out = minVal;
        return true;
    }

    bool getMin(long long &out) const {
        if (empty()) return false;
        out = minVal;
        return true;
    }

    int size() const { return sz; }
};

int main() {
    MinStack s;

    s.push(3);
    long long v;
    if (s.getMin(v)) cout << "min: " << v << "  ";
    if (s.top(v))    cout << "top: " << v << "\n";

    s.push(5);
    if (s.getMin(v)) cout << "min: " << v << "  ";
    if (s.top(v))    cout << "top: " << v << "\n";

    s.push(2);
    if (s.getMin(v)) cout << "min: " << v << "  ";
    if (s.top(v))    cout << "top: " << v << "\n";

    s.push(1);
    if (s.getMin(v)) cout << "min: " << v << "  ";
    if (s.top(v))    cout << "top: " << v << "\n";

    s.pop();
    if (s.getMin(v)) cout << "after pop -> min: " << v << "  ";
    if (s.top(v))    cout << "top: " << v << "\n";

    s.pop();
    if (s.getMin(v)) cout << "after pop -> min: " << v << "  ";
    if (s.top(v))    cout << "top: " << v << "\n";

    while (s.size() > 0) s.pop();
    if (!s.top(v)) cout << "top() failed: stack is empty\n";
    if (!s.getMin(v)) cout << "getMin() failed: stack is empty\n";

    return 0;
}