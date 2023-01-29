//알파벳 소문자로만 이루어진 단어 S가 주어진다. 각 알파벳이 단어에 몇 개가 포함되어 있는지 구하는 프로그램을 작성하시오.
//첫째 줄에 단어 S가 주어진다. 단어의 길이는 100을 넘지 않으며, 알파벳 소문자로만 이루어져 있다.
//단어에 포함되어 있는 a의 개수, b의 개수, …, z의 개수를 공백으로 구분해서 출력한다.

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s; //s 입력받음
    for (char a = 'a'; a <= 'z'; a++) { //97-122
        int cnt = 0;
        for (auto c : s) //c에 s를 옮김
            if (a == c) cnt++; //알파벳과 일치한다면 카운트 증가
        cout << cnt << ' '; //카운트 출력함
    }
}