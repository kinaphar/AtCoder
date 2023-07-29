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
  ll n, m;
  cin >> n >> m;
  vector<ll> a(n);
  vector<ll> b(m);
  rep(i, n) { cin >> a[i]; }
  rep(i, m) { cin >> b[i]; }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  ll h = 1000000000;
  ll x = 500000000;
  ll l = 0;
  ll px, nx;
  map<ll, ll> jg;
  size_t posa, posb;
  while (1) {
    px = x;
    auto it = upper_bound(a.begin(), a.end(), x);
    if (it != a.end()) {
      posa = distance(a.begin(), it);
    } else {
      posa = n;
    }
    auto itt = lower_bound(b.begin(), b.end(), x);
    if (itt != b.end()) {
      posb = m - distance(b.begin(), itt);
    } else {
      posb = 0;
    }
    // cout << "x: " << x << " " << posa << " | " << posb << endl;
    if (posa >= posb) {
      jg[x] = 1;
      h = x;
      nx = (h + l) / 2;
    } else {
      jg[x] = -1;
      l = x;
      nx = (h + l) / 2;
    }
    if (jg[x] == 1 && jg[x - 1] == -1) {
      cout << x;
      return 0;
    }
    x = nx;
    if (x == px) {
      x++;
    }
  }
}