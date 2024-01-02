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
  int h, w;
  int max_ts = 0;    // Tシャツ必要数.
  int max_logo = 0;  // ロゴ入り必要数.

  int tmp_ts = 0;
  int tmp_logo = 0;

  s += '0';
  rep(i, n + 1) {
    if (s[i] == '0') {
      max_ts = max(max_ts, tmp_ts);
      max_logo = max(max_logo, tmp_logo);
      tmp_ts = 0;
      tmp_logo = 0;
    } else if (s[i] == '1') {
      tmp_ts++;
    } else if (s[i] == '2') {
      tmp_ts++;
      tmp_logo++;
    }
  }

  cout << max(max_logo, max_ts - m) << endl;
}
