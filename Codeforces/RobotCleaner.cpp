#ifdef ONPC
#define _GLIBCXX_DEBUG
#endif
//[.....Modified by Nexus007.....]
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <string.h>

using namespace __gnu_pbds;
using namespace std;

mt19937  rng(chrono::steady_clock::now().time_since_epoch().count());
typedef tree<int, null_type, less<int>,
        rb_tree_tag, tree_order_statistics_node_update> oset;


#define fo(a,b) for(int i = a; i < b; ++i)
#define ll long long
const int mod = 1e9 + 7;

int second(int n, int m, int rb, int cb, int rd, int cd) {
	int cur_r = rb, cur_c = cb;
	bool reflect_r = false;
	bool reflect_c = false;
	int time = 0;

	while (true) {
		if (cur_r == rd || cur_c == cd)
			break;

		if (cur_r == n)
			reflect_r = true;
		if (cur_c == m)
			reflect_c = true;

		reflect_r ? cur_r-- : cur_r++;
		reflect_c ? cur_c-- : cur_c++;

		time++;
	}

	return time;
}

// AC on codeforces :) 1st go.
//Driver code.
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--) {

		int n, m, rb, cb, rd, cd;
		cin >> n >> m >> rb >> cb >> rd >> cd;
		cout << second(n, m, rb, cb, rd, cd) << "\n";
	}


	return 0;
}
