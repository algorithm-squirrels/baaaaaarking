#include <bits/stdc++.h>
using namespace std;

int main(void) {
	string s;
	cin >> s;
		for (char ch = 'a'; ch <= 'z'; ch++) {
			int cnt = 0;
			for (auto c : s) //string s의 값들을 하나씩 받아와 c에 저장한다. auto 키워드를 사용하면 초깃값의 형식에 맟춰 선언하는 인스턴스(변수)의 형식이 자동으로 결정된다.(타입 추론)
				if (ch == c) cnt++;
			cout << cnt << ' ';
		}
	}
