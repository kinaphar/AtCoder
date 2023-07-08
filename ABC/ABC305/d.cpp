#include <bits/stdc++.h>

#include <atcoder/modint>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  ll n, tmp;  // acc = 累積.
  cin >> n;

  vector<ll> acc(n + 1);
  // v[0] = 0;（自明）.
  map<ll, pair<ll, ll>> mp;  // 分数, 番目, 累計.
  mp[0] = {0, 0};
  rep(i, 1, n + 1) {
    cin >> tmp;
    if (i % 2 == 0) {
      acc[i] = acc[i - 1] + tmp;
    } else if (i % 2 == 1) {
      acc[i] = acc[i - 1];
    }
    mp[tmp] = {i, acc[i]};
  }

  ll q, l, r, accl, accr, ans;
  cin >> q;
  bool existl = false;
  bool existr = false;
  rep(i, 0, q) {
    cin >> l >> r;
    if (mp.count(l) == 0) {
      mp[l] = {-1, -1};
      existl = false;
      auto itrl = mp.find(l);  // これであってる？.
      --itrl;
      if (itrl->first % 2 == 1) {
        accr = itrl->second.second + (r - itrl->first);
      } else {
        accr = itrl->second.second;
      }
    } else {
      auto itrl = mp.find(l);
      accl = itrl->second.second;
      existl = true;
    }

    if (mp.count(r) == 0) {
      mp[r] = {-1, -1};
      existr = false;
      auto itrr = mp.find(r);  // これであってる？.
      --itrr;
      if (itrr->first % 2 == 1) {
        accr = itrr->second.second + (r - itrr->first);
      } else {
        accr = itrr->second.second;
      }
    } else {
      auto itrr = mp.find(r);
      accr = itrr->second.second;
      existr = true;
    }

    ll ans = accr - accl;
    cout << ans << endl;

    if (!existl) {
      mp.erase(l);
    }
    if (!existr) {
      mp.erase(r);
    }
  }
}
