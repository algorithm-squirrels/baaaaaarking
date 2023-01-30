#include <iostream>
#include <stack>
using namespace std;

int main(void) {
    stack<int> S;

    int N;

    cin >> N;

    for (int i = 0; i < N; i++) {
        string order;
        cin >> order;
        if (order == "push") {
            int pushingNumber;
            cin >> pushingNumber;
            S.push(pushingNumber);
        } else if (order == "pop") {
            if (S.size() != 0) { // 확인하지 않으면 런타임 에러 발생
                cout << S.top() << "\n";
                S.pop();
            } else {
                cout << "-1"
                     << "\n";
            }
        } else if (order == "size") {
            cout << S.size() << "\n";
        } else if (order == "empty") {
            if (S.size() != 0)
                cout << 0 << "\n";
            else
                cout << 1 << "\n";
        } else if (order == "top") {
            if (S.size() != 0) // 확인하지 않으면 런타임 에러 발생
                cout << S.top() << "\n";
            else
                cout << -1 << "\n";
        }
    }

    return 0;
}
