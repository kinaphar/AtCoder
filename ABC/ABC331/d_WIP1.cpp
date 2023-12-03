
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
  int n, q;
  cin >> n >> q;

  vector<vector<int>> v[n][n];
  vector<vector<int>> s[n][n];  // sum

  string tmp;
  rep(i, n) {
    cin >> tmp;
    rep(j, n) {
      if (tmp[j] == B) {
        v[i][j] = 1;
      } else {
        v[i][j] = 0;
      }
    }
  }

  rep(i, 0, n) {
    rep(j, 1, n) { s[i][j] = s[i][j - 1] + v[i][j]; }
  }

  ll unit = 0;
  rep(i, 0, n) { unit += v[i][n]; }

  int a, b, c, d;
  ll ans = 0;
  rep(z, q) {
    cin >> a >> b >> c >> d;

    ll tate = (b / n - a / n - 1);  // unitの数.
    ll yoko = (d / n - c / n - 1);  // unitの数.
    ans += tate * yoko * unit;

    // 左.
    rep(i, 0, n) { s[i][n - 1] - s[i][b]; }

    rep(i, a, b) { ans += d / n - (c / n + 1) * s[a % n][n]; }
  }
}
