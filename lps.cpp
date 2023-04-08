#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define itr iterator
#define ritr reverse_iterator
#define pint pair<int, int>
#define pll pair<ll, ll>
#define S second
#define F first
#define v(a) vector<a>
#define mk(a, b) make_pair(a, b)
#define psh(a) push_back(a)
#define mem(arr, a) memset(arr, a, sizeof(arr))
#define pr(n) printf("%d\n", n)
#define sc(n) scanf ("%d", &n)
#define scll(n) scanf ("%lld", &n)
#define prll(n) printf("%lld\n", n)
#define MOD 1000000007ll
#define inf 1000000000ll

string s;

int main (void) {

	cin>>s;
	int l = s.size();
	int i, j;
	int dp[l+1][l+1];
	mem(dp, 0);
	for (i = 1; i <= l; i++) {
		dp[i][i] = 1;
	}
	int k;
	for (i = 2; i <= l; i++) {
		for (j = 1; j+i-1 <= l; j++) {
			k = j+i-1;
			if(s[j-1] == s[k-1]) {
				dp[j][k] = 2 + dp[j+1][k-1];
			}else {
				dp[j][k] = max (dp[j+1][k], dp[j][k-1]);
			}
		}
	}
	cout<<dp[1][l]<<endl;
	return 0;
}
