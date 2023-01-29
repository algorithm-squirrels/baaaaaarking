#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, X, temp;
    vector<int> A;

    cin >> N >> X;

    for (int i = 0; i < N; i++) {
        cin >> temp;
        if (temp < X) {
            A.push_back(temp);
        }
    }

    for (int i = 0; i < A.size(); i++) {
        cout << A[i] << ' ';
    }

    return 0;
}