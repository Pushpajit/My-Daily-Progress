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

//YET TO FIX
bool lightable(set<int> &v, int l, double d) {
	double current, covered;
	current = covered = 0;

	for (int it : v) {
		current = (it - d);

		if (current <= covered)
			covered = it;
		else
			return false;

		covered += d;

	}

	return true;
}

double eps = 1e-2;

double minimumRadious(set<int> &v, int l) {
	double low = 0, high = 1e9;
	double mid;

	while (high - low > eps) {
		mid = low + (high - low) / 2;

		if (lightable(v, l, mid))
			high = mid;
		else
			low = mid;
	}

	if (lightable(v, l, low))
		return low;
	else
		return high;

}


//Driver code.
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, l;
	cin >> n >> l;
	int MAX = 0, MIN = INT_MAX;
	int maxdist = 0;
	set<int> v;

	fo(0, n) {
		int num;
		cin >> num;
		v.insert(num);

	}

	auto next = v.begin();
	auto prev = next;
	next++;

	while (next != v.end()) {
		maxdist = max(maxdist, *prev + *next);
		prev = next;
		next++;
	}
	cout << maxdist << endl;

	cout << max(maxdist / 2, max(0 - *v.begin(), *(v.end()--) - l)) << "\n";
	return 0;
}
