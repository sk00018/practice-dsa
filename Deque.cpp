#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    // Insert elements
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(5);
    dq.push_front(1);

    cout << "Deque elements: ";
    for (int x : dq) {
        cout << x << " ";
    }

    // Remove elements
    dq.pop_front();
    dq.pop_back();

    cout << "\nAfter removing elements: ";
    for (int x : dq) {
        cout << x << " ";
    }

    cout << "\nFront element: " << dq.front();
    cout << "\nBack element: " << dq.back();

    return 0;
}