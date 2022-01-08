#ifdef ONPC
#define _GLIBCXX_DEBUG
#endif
//[.....Modified by Nexus007.....]
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <conio.h>
#include <string.h>

using namespace __gnu_pbds;
using namespace std;

mt19937  rng(chrono::steady_clock::now().time_since_epoch().count());
typedef tree<int, null_type, less<int>,
        rb_tree_tag, tree_order_statistics_node_update> oset;


#define ll long long
const int mod = 1e9 + 7;

//
int numLength(int x) {
	int c = 0;
	while (x) {
		c++;
		x /= 10;
	}
	return c;
}

bool checkEven(int x) {
	while (x) {
		if (!(x & 1))
			return true;
		x /= 10;
	}
	return false;
}

//Driver code. (ACCEPTED :)
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--) {

		int x;
		cin >> x;
		if (!(x / 10) && x & 1) {
			cout << -1 << "\n";
			continue;
		}

		if (x & 1) {
			if (!(x / ((int)pow(10, numLength(x) - 1)) & 1))
				cout << 1 << "\n";
			else if (checkEven(x))
				cout << 2 << "\n";
			else
				cout << -1 << "\n";

		} else
			cout << 0 << "\n";

	}
	return 0;
}

