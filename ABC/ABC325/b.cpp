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

  vector<int> w(n);
  vector<int> x(n);

  rep(i, n) { cin >> w[i] >> x[i]; }

  int ans = 0;
  rep(i, 0, 24) {  // i時からの会議を考える.
    int tmp = 0;
    rep(j, n) {
      int lt = (x[j] + i) % 24;  // local time.
      if (9 <= lt && lt < 18) {
        tmp += w[j];
      }
    }
    ans = max(ans, tmp);
  }

  cout << ans << endl;
}
