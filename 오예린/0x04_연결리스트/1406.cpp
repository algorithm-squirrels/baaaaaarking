#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string input;
	int orderNum = 0;
	char order; //입력 받은 명령 종류

	cin >> input;
	cin >> orderNum;

	list<char> L;
	auto cursor = L.end(); 

	for (auto c : input)
		L.push_back(c);

	while (orderNum > 0) {

		cin >> order;

		if (order == 'L') {
			if (cursor != L.begin())
				cursor--;
		}
		else if (order == 'D') {
			if (cursor != L.end())
				cursor++;
		}
		else if (order == 'B') {
			if (cursor != L.begin()) {
				cursor--;
				cursor = L.erase(cursor);
			}
		}
		else { // P $일때
			char addChar;
			cin >> addChar;
			L.insert(cursor, addChar);
		}

		orderNum--;
	}
	for (auto c : L)
		cout << c;
}