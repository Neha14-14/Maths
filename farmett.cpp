#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007ll
using namespace std;

ll farmat (ll a, ll b) {
  if(b == 0){
    return 1;
  }
  ll x;
  x  = farmat(a, b / 2);
  x = (x%MOD * x %MOD)%MOD;
  if(b % 2 == 1) {
    return (x%MOD * a%MOD)%MOD;
  }else {
    return x;
  }
}

int main (void)
{
  ll a;
  cin>>a;
  cout<<farmat(a, MOD-2)<<endl;
  return 0;
}
