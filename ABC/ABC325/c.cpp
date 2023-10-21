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
  // グラフで効率よく解けるかも？ 一旦思いついた方法で.

  int h, w;
  cin >> h >> w;

  vector<string> d(h);  // data.
  rep(i, h) { cin >> d[i]; }

  // vector<vector<int>> v(h, vector<int>(w));  // visit.

  int ans = 0;

  queue<pair<int, int>> q;

  rep(i, h) {
    rep(j, w) {
      if (d[i][j] == '.') continue;
      q.push(make_pair(i, j));
      d[i][j] = '.';
      while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        rep(k, -1, 2) {
          rep(l, -1, 2) {
            if (x + k >= 0 && x + k <= h - 1 && y + l >= 0 && y + l <= w - 1) {
              if (d[x + k][y + l] == '#') {
                q.push(make_pair(x + k, y + l));
                d[x + k][y + l] = '.';
              }
            }
          }
        }
        q.pop();
      }
      ans++;  // 島一つ消せた.
    }
  }

  cout << ans << endl;
}
