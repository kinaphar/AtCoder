#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <queue>
#include <set>
#include <vector>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;

int main() {
  ll n, k;
  cin >> n >> k;
  ll a[n];
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
  }
  ll sum[n];
  sum[0] = a[0];
  for (ll i = 1; i < n; i++) {
    sum[i] = sum[i - 1] + a[i];
  }
  map<ll, ll> m;
  ll ans = 0;
  for (ll i = 0; i < n; i++) {
    if (a[i] == k) {
      ans++;
    }
  }
  for (ll i = 0; i < n; i++) {
    m[sum[i]]++;
    if (i >= 1) {
      ans += m[sum[i] - k];
    }
  }
  cout << ans << endl;
  return 0;
}