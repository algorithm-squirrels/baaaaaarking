#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0), cin.tie(0);
    int N;
    cin >> N;

    deque<int> D;

    while (N--) {
        string order;
        cin >> order;
        if (order == "push_front") {
            int pushingNumber;
            cin >> pushingNumber;
            D.push_front(pushingNumber);
        } else if (order == "push_back") {
            int pushingNumber;
            cin >> pushingNumber;
            D.push_back(pushingNumber);
        } else if (order == "pop_front") {
            if (D.empty()) {
                cout << -1 << "\n";
            } else {
                cout << D.front() << "\n";
                D.pop_front();
            }
        } else if (order == "pop_back") {
            if (D.empty()) {
                cout << -1 << "\n";
            } else {
                cout << D.back() << "\n";
                D.pop_back();
            }
        } else if (order == "size") {
            cout << D.size() << "\n";
        } else if (order == "empty") {
            if (D.empty()) {
                cout << 1 << "\n";
            } else {
                cout << 0 << "\n";
            }
        } else if (order == "front") {
            if (D.empty()) {
                cout << -1 << "\n";
            } else {
                cout << D.front() << "\n";
            }
        } else if (order == "back") {
            if (D.empty()) {
                cout << -1 << "\n";
            } else {
                cout << D.back() << "\n";
            }
        }

    }
}