#include<bits/stdc++.h>
#define ll long long
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
  cout<<a<<" * "<<x<<" + "<<b<<" * "<<y<<" = "<<gcd<<endl;
  return 0;
}
