#include <bits/stdc++.h>

#include <atcoder/modint>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int N, M;
vector<vector<int>> g;
vector<int> vis;
vector<pair<int, int>> vp;

void dfs(int c, int cn) {  // vp[e] に記録.
  vis[c] = true;
  vp[cn].first++;
  vp[cn].second += g[c].size();
  for (auto& d : g[c]) {
    if (vis[d]) continue;
    dfs(d, cn);
  }
}
int main() {
  cin >> N >> M;
  g.resize(N);  // 配列の要素数を変更できる.
  for (int i = 0; i < M; i++) {
    int u, v;
    cin >> u >> v;
    --u, --v;
    // if (count(g[u].begin(), g[u].end(), v) != 0) {
    //   // cout << "重複" << endl;
    //   continue;
    // }
    g[u].push_back(v);
    g[v].push_back(u);
  }
  vis.resize(N);

  int cn = 0;  // cn 連結成分の数.
  int ans = 0;
  for (int i = 0; i < N; i++) {
    if (!vis[i]) {
      vp.push_back(pair(0, 0));
      dfs(i, cn);
      if (vp[cn].first == 1) {
        ans += 0;
        // cout << "case 1" << endl;
      } else if (vp[cn].first == 2) {
        ans += 1 - (vp[cn].second / 2);
        // cout << "case 2" << endl;
      } else if (vp[cn].first == 3) {
        ans += 3 - (vp[cn].second / 2);
        // cout << "case 3" << endl;
      } else {
        ans += (vp[cn].first * (vp[cn].first - 3)) + vp[cn].first * 2 -
               (vp[cn].second / 2);
        // cout << "case 4" << endl;
        // cout << vp[cn].second << endl;
        // cout << (vp[cn].first * (vp[cn].first - 3) / 2) << endl;
        // cout << vp[cn].first << endl;
        // cout << (vp[cn].second / 2) << endl;
      }
      cn++;
    }
  }
  cout << ans << endl;
}