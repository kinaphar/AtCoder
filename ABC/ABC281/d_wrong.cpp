#include <bits/stdc++.h>

#include <atcoder/modint>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  ll n, k, d;
  cin >> n >> k >> d;

  vector<ll> v(n);
  set<ll> s1;
  set<ll> s2;

  repl(i, 0, n) {
    cin >> v[i];
    s1.insert(v[i]);
  }

  repl(i, 1, k) {
    for (auto itr = s1.begin(); itr != s1.end();) {
      repl(j, 0, n) { s2.insert(*itr + v[j]); }
    }
    s1 = s2;
    s2.clear();
  }

  // ll ans = -1;
  // for (auto itr = s1.begin(); itr != s1.end();) {
  //   if (*itr % d == 0 && ans < *itr) {
  //     ans = *itr;
  //   }
  // }
  // cout << ans << endl;
}
