#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0), cin.tie(0);

    int N;
    cin >> N;

    queue<int> Q;

    while (N) {

        string order;
        cin >> order;
        if (order == "push") {
            int pushingNumber;

            cin >> pushingNumber;
            Q.push(pushingNumber);

        } else if (order == "pop") {
            if (Q.empty()) {
                cout << -1 << "\n";
            } else {
                cout << Q.front() << "\n";
                Q.pop();
            }
        } else if (order == "size") {
            cout << Q.size() << "\n";
        } else if (order == "empty") {
            if (Q.empty()) {
                cout << 1 << "\n";
            } else {
                cout << 0 << "\n";
            }
        } else if (order == "front") {
            if (Q.empty()) {
                cout << -1 << "\n";
            } else {
                cout << Q.front() << "\n";
            }
        } else if (order == "back") {
            if (Q.empty()) {
                cout << -1 << "\n";
            } else {
                cout << Q.back() << "\n";
            }
        }
        N--;
    }

    return 0;
}