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
#include <stack>
#include <vector>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define ALL(a) (a).begin(), (a).end()
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;

int main() {
  ll w, h;
  cin >> w >> h;
  ll n;
  cin >> n;
  vector<pair<ll, ll>> p;  //{x,y}
  for (ll i = 0; i < n; i++) {
    ll x, y;
    cin >> x >> y;
    p.push_back(make_pair(x, y));
  }
  ll a, b;
  cin >> a;
  vector<ll> aa;
  for (ll i = 0; i < a; i++) {
    ll tmp_a;
    cin >> tmp_a;
    aa.push_back(tmp_a);
  }
  cin >> b;
  vector<ll> bb;
  for (ll i = 0; i < b; i++) {
    ll tmp_b;
    cin >> tmp_b;
    bb.push_back(tmp_b);
  }
  sort(ALL(aa));
  sort(ALL(bb));
  map<int, map<int, int>> dp;
  ll max = -1;
  ll min = LL_MAX;
  ll zero_count = (a + 1) * (b + 1);
  for (ll i = 0; i < n; i++) {
    // cout << p[i].first << " " << p[i].second << ": ";
    ll x_piece = lower_bound(ALL(aa), p[i].first) - aa.begin();
    ll y_piece = lower_bound(ALL(bb), p[i].second) - bb.begin();
    // cout << x_piece << " " << y_piece << endl;
    if (dp[x_piece][y_piece] == 0) zero_count--;
    dp[x_piece][y_piece] += 1;
    if (max <= dp[x_piece][y_piece]) {
      max = dp[x_piece][y_piece];
    }
    if (min >= dp[x_piece][y_piece]) {
      min = dp[x_piece][y_piece];
    }
  }
  if (zero_count > 0) {
    min = 0;
  }
  cout << min << " " << max << endl;
  return 0;
}