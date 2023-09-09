#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using Graph = vector<vector<int>>;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;

#define OVERLOAD_REP(_1, _2, _3, name, ...) name
#define REP1(i, n) for (auto i = std::decay_t<decltype(n)>{}; (i) != (n); ++(i))
#define REP2(i, l, r) for (auto i = (l); (i) != (r); ++(i))
#define rep(...) OVERLOAD_REP(__VA_ARGS__, REP2, REP1)(__VA_ARGS__)

int main() {
  ll x, y, z, w;
  ll ans = 1;
  ll m = 998244353;

  cin >> x >> y >> z >> w;

  // ll a = x - z;                 // 人間追放数.
  // ll b = y - w;                 // 狼追放数.

  for (ll i = x; i > z; i--) {  // 人間すべて 〜 人間残り.
    ans *= i;
    ans %= m;
  }
  for (ll i = x - z; i > 1; i--) {  // 人間追放数!　で割る.
    ans /= i;
  }
  cout << ans << endl;

  for (ll i = y; i > w; i--) {  // 狼すべて 〜 狼残り.
    ans *= i;
    ans %= m;
  }
  for (ll i = y - w; i > 1; i--) {  // 狼追放数!　で割る.
    ans /= i;
  }
  cout << ans << endl;

  for (ll i = (x - z) + (y - w); i > 1;
       i--) {  // 追放の合計数!、最初だけ「残り0人」のほう.
    if (i == (x - z) + (y - w)) {
      if (z == 0) {
        ans *= (x - z);
        ans %= m;
      } else if (w == 0) {
        ans *= (y - w);
        ans %= m;
      }
    } else {
      ans *= i;
      ans %= m;
    }
  }
  cout << ans << endl;
}