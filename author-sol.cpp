#include <bits/stdc++.h>

using namespace std;

int GetLargest(int n) {
	int p = 1;
	while (p * 2 <= n) {
		p *= 2;
	}
	return p;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		// to solve this, we need to consider the range between two powers of two
		// the answer is the maximum between the range of the largest power to n
		// and the second largest power to the largest power
		// answer 1 = [largest power, n]
		// answer 2 = [second largest power, largest power)
		int largest_power = GetLargest(n);
		int second_largest_power = largest_power / 2;
		int ans1 = n - largest_power + 1;
		int ans2 = largest_power - second_largest_power;
		cout << max(ans1, ans2) << '\n';
	}
	return 0;
}
