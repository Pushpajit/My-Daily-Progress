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
const int N = 2e5 + 10;

int hsh[N]; //Count all frequency of numbers in accending order.
int multiple_count[N];


//AC on hacherearth IMPORTANT
//Driver code.
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int num;
		cin >> num;
		hsh[num]++;
	}

	//Pre-computing the total number of multiple of each element.
	for (int i = 1; i < N ; ++i)
		for (int j = i; j < N; j += i)
			multiple_count[i] += hsh[j];


	for (int i = 1; i < N; ++i)
		if (hsh[i] > 0)
			cout << hsh[i] << " ";

	int t;
	cin >> t;
	while (t--) {
		int P, Q;
		cin >> P >> Q;
		ll lcm = (P * 1ll * Q) / __gcd(P, Q);
		int ans = (multiple_count[P] + multiple_count[Q]);

		if (lcm < N)
			ans -= multiple_count[lcm];

		cout << ans << '\n';
	}

	return 0;
}
