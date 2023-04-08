#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000009ll
using namespace std;
ll gcd, x, y;

void extendedGcd(ll a, ll b) {
  if(b == 0) {
    gcd = a;
    x = 1;
    y = 0;
  }else {
    extendedGcd(b, a % b);
    ll temp;
    temp = x;
    x = y;
    y = temp - (a/b)*x;
  }
}

int main (void)
{
  ll a, b;
  cin>>a>>b;
  extendedGcd(a, b);
  if(gcd == 1)
    cout<<(x%b+b)%b<<endl;
  else
    cout<<"Multiplicative Inverse Doesn't exist\n";
  return 0;
}
