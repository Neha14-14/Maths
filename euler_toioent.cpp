#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define MOD 1000000007ll

int fi(int n) {
		int result = n;

		for(int i=2;i*i <= n;i++) {
			if (n % i == 0) result -= result / i;
			while (n % i == 0) n /= i;
		}

		if (n > 1) result -= result / n;

		return result;
}
int main (void) {
	int n;
	cin>>n;
	cout<<fi(n)<<endl;

	return 0;
}
