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


//
ll func(vector<ll> &v) {
	ll MIN = *min_element(v.begin(), v.end());
	ll MAX = *max_element(v.begin(), v.end());
	bool flag = true;

	while (MIN <= MAX) {
		flag = true;
		for (int i = 1; i < v.size(); ++i)
		{
			if (((v[i] % MIN) == 0) && ((v[i - 1] % MIN) == 0) || ((v[i] % MIN) > 0) && ((v[i - 1] % MIN) > 0)) {
				flag = false;
				break;
			}
		}
		if (flag)
			return MIN;

		MIN++;
	}

	return 0;
}

//Driver code.
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--) {

		int n;
		cin >> n;
		vector<ll> v(n);
		fo(0, n) cin >> v[i];

		cout << func(v) << "\n";
	}


	return 0;
}