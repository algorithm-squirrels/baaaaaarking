#include <bits/stdc++.h>
using namespace std;

//다솜이는 은진이의 옆집에 새로 이사왔다. 다솜이는 자기 방 번호를 예쁜 플라스틱 숫자로 문에 붙이려고 한다.
//다솜이의 옆집에서는 플라스틱 숫자를 한 세트로 판다.한 세트에는 0번부터 9번까지 숫자가 하나씩 들어있다.다솜이의 방 번호가 주어졌을 때, 필요한 세트의 개수의 최솟값을 출력하시오.
//(6은 9를 뒤집어서 이용할 수 있고, 9는 6을 뒤집어서 이용할 수 있다.)

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    while (N--) {
        int a[26] = {}; // 각 문자의 개수를 저장하는 배열
        string s1, s2;
        cin >> s1 >> s2;

        for (auto c : s1) a[c - 'a']++; //아스키코드로 알파벳 나올때마다 배열 값 하나씩 올림
        for (auto c : s2) a[c - 'a']--; 

        // 0이 아닌 배열의 요소가 있을 경우, 개수가 다른 문자가 존재하므로 false
        bool isPossible = true;
        // 중괄호가 없어도 문제는 없으나 가독성을 위해 삽입
        for (int i : a) {
            if (i != 0) isPossible = false;
        }

        if (isPossible) cout << "Possible\n";
        else cout << "Impossible\n";
    }
}