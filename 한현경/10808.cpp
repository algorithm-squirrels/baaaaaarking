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

//다른 풀이
//idea: a-z 알파벳의 빈도수를 담는 freq배열을 정의하고, string s에 알파벳이 등장할 때마다 배열의 원소의 수를 늘린다.
#include <bits/stdc++.h>
using namespace std;

int freq[26];  //배열을 전역 변수로 설정하면 0값으로 초기화됨.
int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	for(auto c : s)
		freq[c - 'a']++;  //c가 'a'였다면 freq 배열의 첫번째, 'b'였다면 두번째 원소의 값을 1 증가한다.
	for(int i=0; i<26;i++) 
		cout << freq[i] << ' ';  //for문 돌면서 freq배열 출력.
}
