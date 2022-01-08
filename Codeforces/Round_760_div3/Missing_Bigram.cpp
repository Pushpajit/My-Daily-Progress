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


/*
:DETAILED SOLUTION:
-------------------

7
ab bb ba a[a] [b]a
--> ab+b+a+a+ba => abbaaba

7
ab ba aa ab ba
--> ab+a+a+b+a => abaaba+a ==>abaabaa

5
b[b] [a]b bb
--> bb+ab+b => bbabb

3
aa
--> aa+a => aaa

*/
string bigram(vector<string> &vs, int n) {
	string ans;
	ans += vs[0];

	for (int i = 1; i < vs.size(); ++i)
	{
		if (ans[ans.size() - 1] == vs[i][0])  // if the last char of "ans" is same as 1st char of
			ans += vs[i][1];                  // the vs[i] then it's a biagram and add the 2nd char.
		else							      // Else add the whole biagram(i.e v[i]) with the ans
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
