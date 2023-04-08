#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pint pair<int, int>
#define pll pair<ll, ll>
#define mk(a, b) make_pair(a, b)
#define pr(n) printf("%d\n", n)
#define sc(n) scanf ("%d", &n)
#define scll(n) scanf ("%lld", &n)
#define prll(n) printf("%lld\n", n)
#define MOD 1000000007ll

double power (double a, int b) {
	if (b == 1) {
		return a;
	}else if (b == 0) {
		return 1;
	}
	double x = power (a, b/2);
	if (b % 2 == 0) {
		return x * x;
	}else {
		if (b > 0) {
			return x * x * a;
		}else {
			return (x * x) / a;
		}
	}
}

int main (void) {
	double a, b;
	cin>>a>>b;
	printf("%lf\n", power(a, (int)b));
	return 0;
}
