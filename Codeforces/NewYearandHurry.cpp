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



bool isSolveable(int n, int k) {
	int hh = 20, mm = 0;
	int min_to_solve = (5 * n * (n + 1)) / 2; // sum of AP common diff 5
	hh += (min_to_solve / 60) + (k / 60);
	mm += (min_to_solve % 60) + (k % 60);

	hh += mm / 60;
	mm = mm % 60;

	//cout << hh << ":" << mm << endl;

	if (hh < 24)
		return true;
	else if (hh == 24) {
		if (mm == 0)
			return true;
		else
			return false;
	}
	else
		return false;

}//O(1)


int maxProblemSolved(int n, int k) {
	int l = 1, r = n;
	int m;

	while (r - l > 1) {
		m = l + (r - l) / 2;

		if (isSolveable(m, k))
			l = m;
		else
			r = m;
	}

	if (isSolveable(r, k))
		return r;
	else if (isSolveable(l, k))
		return l;
	else
		return 0;

}//O(logn)


//AC on codeforces :) in one go.
//Driver code.
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, k;
	cin >> n >> k;
	cout << maxProblemSolved(n, k);

	return 0;
}
