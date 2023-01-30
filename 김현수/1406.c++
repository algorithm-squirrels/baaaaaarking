#include <iostream>
#include <list>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0), cin.tie(0);

    list<char> S;
    list<char>::iterator t = S.begin();

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        S.push_back(s[i]);
        t++;
    }

    int M;
    cin >> M;

    string order;

    t++;

    for (int i = 0; i <= M; i++) {
        getline(cin, order);

        switch (order[0]) {
        case 'L':
            if (t != S.begin())
                t--;
            break;
        case 'D':
            if (t != S.end())
                t++;
            break;
        case 'B':
            if (t != S.begin()) {
                t--;
                t = S.erase(t);
            }
            break;
        case 'P':
            S.insert(t, order[2]);
            break;
        }
    }

    for (auto i : S) cout << i;

    return 0;
}