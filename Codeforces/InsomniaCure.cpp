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
vector<bool> isPrime(1e5 + 1, true);


int solve(vector<int> &v) {
	int escape = 0;


	for (int i = 0; i < 4; ++i)
		if (v[i] == 1)
			return v[4];

	//pre-computing seive.
	for (int i = 0; i < 4; ++i)
		for (int j = v[i]; j <= v[4]; j += v[i])
			isPrime[j] = false;

	for (int i = 1; i <= v[4]; ++i)
		if (isPrime[i])
			escape++;

	return (v[4] - escape);

}//O(d)

//AC of codeforces :)
//Driver code.
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	vector<int> dragon(5);

	fo(0, 5) cin >> dragon[i];
	cout << solve(dragon);

	return 0;
}
