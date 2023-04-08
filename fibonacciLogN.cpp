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

void mul (int a[2][2], int b[2][2]) {
	int w, x, y, z;
 	x =  a[0][0]*b[0][0] + a[0][1]*b[1][0];
 	y =  a[0][0]*b[0][1] + a[0][1]*b[1][1];
 	z =  a[1][0]*b[0][0] + a[1][1]*b[1][0];
 	w =  a[1][0]*b[0][1] + a[1][1]*b[1][1];

  a[0][0] = x;
  a[0][1] = y;
  a[1][0] = z;
  a[1][1] = w;
}

void power (int m[2][2], int n) {
	if (n == 1 || n == 0) {
		return ;
	}
	int f[2][2] = {{1, 1}, {1, 0}};
	power (m, n/2);
	mul (m, m);
	if (n % 2 != 0) {
		mul (m, f);
	}
}

int fibo (int n) {
	if (n == 0) {
		return 0;
	}
	int m[2][2] = {{1, 1}, {1, 0}};
	power(m, n-1);
	return m[0][0];
}

int main (void) {
	int n;
	sc (n);

	cout<<fibo(n)<<endl;

	return 0;
}
