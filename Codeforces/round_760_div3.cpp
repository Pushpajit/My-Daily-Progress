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
string bigram(vector<string> &vs, int n) {
	string ans;
	ans += vs[0];

	for (int i = 1; i < vs.size(); ++i)
	{
		if (ans[ans.size() - 1] == vs[i][0])
			ans += vs[i][1];
		else
			ans += vs[i];
	}

	if (ans.size() < n)
		ans += 'a';

	return ans;

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
		vector<string> vs(n - 2);
		fo(0, n - 2) cin >> vs[i];
		cout << bigram(vs, n) << "\n";
	}


	return 0;
}
