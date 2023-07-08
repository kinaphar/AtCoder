#include <algorithm>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
  ll n, q;
  cin >> n;
  vector<ll> a(n);
  map<ll, ll> ra;  // ra[val]=i
  rep(i, n) {
    cin >> a[i];
    ra[a[i]] = i;
  }
  ll s[n];         // a[i]分後時点での合計
  s[0] = 0;
  bool t = false;  // 起きてる
  for (ll i = 1; i < n; i++) {
    if (t == false) {
      s[i] = s[i - 1];
      t = true;
    } else {
      s[i] = s[i - 1] + a[i] - a[i - 1];
      t = false;
    }
  }
  cin >> q;
  ll l[q];
  ll r[q];
  rep(i, q) { cin >> l[i] >> r[i]; }
  ll v;
  rep(i, q) {
    auto it = lower_bound(a.begin(), a.end(), r[i]);
    v = ra[*it];
    // cout << *it << " | ";
    if (v == 0) {
      r[i] = 0;
    } else if (s[v] == s[v - 1]) {
      r[i] = s[v];
    } else {
      r[i] = s[v] - *it + r[i];
    }
    // cout << r[i] << "  |  ";
    auto it2 = lower_bound(a.begin(), a.end(), l[i]);
    v = ra[*it2];
    // cout << *it2 << " | ";
    if (v == 0) {
      l[i] = 0;
    } else if (s[v] == s[v - 1]) {
      l[i] = s[v];
    } else {
      l[i] = s[v] - *it2 + l[i];
    }
    // cout << l[i] << endl;
    cout << r[i] - l[i] << endl;
  }
}
