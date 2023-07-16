#include <bits/stdc++.h>

#include <atcoder/modint>
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
  int n, m, tmp;
  cin >> n >> m;

  vector<int> p(n);
  vector<int> c(n);
  vector<vector<int>> v(n, vector<int>(m + 1));

  rep(i, n) {
    cin >> p[i] >> c[i];
    rep(j, c[i]) {
      cin >> tmp;
      v[i][tmp] = 1;
    }
  }

  bool ssExist = false;
  bool s = false;
  bool fs = false;

  rep(i, n) {
    rep(j, n) {
      s = true;
      fs = false;
      if (p[i] < p[j]) continue;
      rep(k, m) {
        if (v[i][k] == 1 && v[j][k] == 0) {
          s = false;
          break;
        }
        if (v[i][k] == 0 && v[j][k] == 1) fs = true;
      }
      if (p[i] == p[j] && fs == false) continue;

      if (s) {
        ssExist = true;
        break;
      }
    }
  }

  if (ssExist) {
    cout << "Yes";
  } else {
    cout << "No";
  }
}
