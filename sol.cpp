#include <bits/stdc++.h>

using namespace std;

double Average(vector<double> a) {
	double sum = 0;
	for (int i = 0; i < (int) a.size(); i++) {
		sum += a[i];
	}
	return round(sum / (int) a.size());
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<double> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// sort the sequence in non-decreasing order
	// check the average every i-th turn and change the value to 5 if the average is
	// still not greater than or equal to 5 (highest grade)
	sort(a.begin(), a.end());
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (Average(a) >= 5) {
			break;
		}
		a[i] = 5;
		cnt++;
	}
	cout << cnt << '\n';
	return 0;
}
