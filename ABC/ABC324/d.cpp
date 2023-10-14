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
  int n;
  cin >> n;

  string s;
  cin >> s;

  sort(s.begin(), s.end());

  string s_tmp;
  string zero_padding;

  int ans = 0;
  ll i = 0;

  ll limit = 1;
  rep(i, n) { limit *= 10; }
  for (i = 0; i * i < limit; i++) {  // 範囲を検討したい.
    s_tmp = to_string(i * i);
    sort(s_tmp.begin(), s_tmp.end());

    zero_padding = "";
    rep(j, n - s_tmp.length()) { zero_padding += "0"; }
    s_tmp = zero_padding + s_tmp;

    if (s_tmp == s) {
      ans++;
    }
  }

  cout << ans << endl;
}
