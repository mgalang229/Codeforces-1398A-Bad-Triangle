#include <bits/stdc++.h>

using namespace std;

const int nax = 5 * 1e4;
int a[nax], n;

void test_case() {
	cin >> n;
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int p = a[0] + a[1];
	if(a[n-1] >= p) {
		cout << "1 2 " << n;
	} else cout << -1;
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	for(int nr = 1; nr <= T; ++nr) {
		test_case();
	}
	//test_case();
	return 0;
}
