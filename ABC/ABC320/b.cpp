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
  string s;
  cin >> s;

  int l = s.length();
  int ans = 0;

  rep(i, 0, l) {
    rep(j, 1, l - i + 1) {
      string o = s.substr(i, j);
      string r = o;
      reverse(r.begin(), r.end());
      if (o == r) {
        int ol = o.length();
        ans = max(ans, ol);
      }
    }
  }

  cout << ans << endl;
}
