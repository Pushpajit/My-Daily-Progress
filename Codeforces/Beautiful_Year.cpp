#ifdef ONPC
#define _GLIBCXX_DEBUG
#endif
//(Modified by N3XU5)
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


int nextBeauty(int y) {
	for (int i = y + 1; ; ++i)
	{
		vector<int> HASH(10, 0);
		int temp = i;
		while (temp) {
			if (++HASH[temp % 10] >= 2) {
				break;
			}
			temp /= 10;
		}
		if (temp == 0) return i;
	}
}
//CODEFORCES ACCEPTED :)
//Driver code.
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int y;
	cin >> y;
	cout << nextBeauty(y);
	return 0;
}
