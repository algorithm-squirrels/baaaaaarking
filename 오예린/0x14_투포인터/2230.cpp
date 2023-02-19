#include <bits/stdc++.h>
using namespace std;

int n;
int m;
int diff;
int minDiff = 2000000000; //애초에 minDiff는 최고로 큰 값으로 설정해버리기

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	cin >> m;
	int A[n] = { 0 };
	int en = 0;

	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}

	sort(A, A + n);

	for (int st = 0; st < n; st++) {
		while (en < n && A[en] - A[st] < m) {
			en++;
		}
		if (en == n) break;
		minDiff = min(minDiff, A[en] - A[st]) //최소값 비교할 때는 min 함수 활용
	}

	cout << minDiff;
}
