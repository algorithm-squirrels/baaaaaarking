#include <iostream>

int main(void) {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	int n, x, a[10000];
	std::cin >> n >> x;
	for (int i=0;i < n;i++) std::cin >> a[i];
	for (int j = 0;j < n;j++) {
		if (a[j] < x) {
			std::cout << a[j] << ' ';
		}
	}
}
