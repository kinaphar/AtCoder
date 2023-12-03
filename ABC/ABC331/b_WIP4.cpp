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
  int n, s, m, l;
  cin >> n >> s >> m >> l;

  vector<int> v(n + 15, 1000000);
  v[0] = 0;

  rep(i, 0, n + 1) {
    if (v[i] != 1000000) {
      v[i + 6] = min(v[i + 6], v[i] + s);
      // cout << "v[" << i << "+6] = " << v[i + 6] << endl;

      v[i + 8] = min(v[i + 8], v[i] + m);
      // cout << "v[" << i << "+8] = " << v[i + 8] << endl;

      v[i + 12] = min(v[i + 12], v[i] + l);
      // cout << "v[" << i << "+12] = " << v[i + 12] << endl;
    }
    // cout << "--------" << endl;
  }

  int ans = 1000000;
  rep(i, n, n + 12) {
    ans = min(ans, v[i]);
    // cout << "ans = " << ans << endl;
  }

  cout << ans << endl;
}
