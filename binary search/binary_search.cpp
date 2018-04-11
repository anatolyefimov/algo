#include <iostream>

using namespace std;

bool binary_search(int a[], int n, int x) {
	int l = 0;
	int r = n - 1;
	while (l <= r) {
		int m = (l + r) / 2;
		if (x == a[m]) {
			return true;
		}
		if (x < a[m]) {
			r = m - 1;
		}
		else {
			l = m + 1;
		}
	}
	return false;
}

int main() {
	int a[10] = {1, 2, 3, 4 ,5 ,6 ,7, 11, 21, 43};
	cout << binary_search(a, 10, 21);
	return 0;
}
