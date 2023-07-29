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
  int n, m;
  cin >> n >> m;

  vector<string> v(n);

  rep(i, n) { cin >> v[i]; }

  string s;
  bool flag = true;
  rep(i, n - 8) {
    rep(j, m - 8) {
      flag = true;
      rep(k, 0, 2) {
        s = {v[i + k][j], v[i + k][j + 1], v[i + k][j + 2], v[i + k][j + 3]};
        if (s != "###.") flag = false;
      }

      s = {v[i + 3][j], v[i + 3][j + 1], v[i + 3][j + 2], v[i + 3][j + 3]};
      if (s != "....") flag = false;

      s = {v[i + 5][j + 5], v[i + 5][j + 6], v[i + 5][j + 7], v[i + 5][j + 8]};
      if (s != "....") flag = false;

      rep(k, 6, 8) {
        s = {v[i + k][j + 5], v[i + k][j + 6], v[i + k][j + 7],
             v[i + k][j + 8]};
        if (s != ".###") flag = false;
      }

      if (flag) {
        cout << i + 1 << " " << j + 1 << endl;
      }
    }
  }
}
