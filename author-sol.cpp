#include <bits/stdc++.h>

using namespace std;

bool Check(int sum, int n) {
	return (sum * 10 >= 45 * n);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// sort the sequence in non-decreasing order and calculate the sum (initial)
	sort(a.begin(), a.end());
	int sum = accumulate(a.begin(), a.end(), 0);
	// add the needed points (difference of highest grade and current grade of Vasya) to the sum
	// and check if the current average is greater than or equal to 4.5
	int ans = 0;
	while (!Check(sum, n)) {
		sum += (5 - a[ans]);
		ans++;
	}
	cout << ans << '\n';
	return 0;
}
