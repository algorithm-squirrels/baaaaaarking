#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    int arr[26] = {0};

    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        arr[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
        cout << arr[i] << ' ';

    return 0;
}