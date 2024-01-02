#include <bits/stdc++.h>

// #include <atcoder/modint>
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
  ll a, m, l, r;  // m は mod の m;
  cin >> a >> m >> l >> r;

  // ll ans = 0;

  // if (a > r) {
  //   cout << 0 << endl;
  // } else if (l <= a) {
  //   cout << ((r - a) / m) + 1 << endl;
  // } else if (l > a) {
  //   cout << (((r - a) / m) + 1) - (((l - a) / m)) << endl;
  // }

  ll am = (a % m + m) % m;  // プラスで解釈したAのmodM.
  ll lm = (l % m + m) % m;
  ll rm = (r % m + m) % m;
  if (am < lm) {
    l = l - (lm - am) + m;
  } else {
    l = l - (lm - am);
  }

  if (am <= rm) {
    r = r - (rm - am);
  } else {
    r = r - (rm - am) - m;
  }
  if (rm != am) r = r - rm;

  // cout << l << ", " << r << endl;

  cout << (r - l) / m + 1 << endl;
}
