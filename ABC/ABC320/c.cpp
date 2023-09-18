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
  int m;
  cin >> m;

  vector<string> s(3);
  cin >> s[0] >> s[1] >> s[2];

  int ans = 999;
  vector<int> r(3);
  rep(i, 0, 10) {
    r = {0, 1, 2};
    do {
      int cnt = 0;
      rep(t, 0, 3 * m) {
        if (s[r[cnt]][t % m] - '0' == i) cnt++;
        if (cnt == 3) {
          ans = min(ans, t);
          break;
        }
      }
    } while (next_permutation(r.begin(), r.end()));
  }

  if (ans == 999) {
    cout << "-1" << endl;
  } else {
    cout << ans << endl;
  }
}
