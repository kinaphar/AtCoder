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
  // vp[cn].first++;
  // vp[cn].second += g[c].size();
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
    g[u].push_back(v);
    g[v].push_back(u);
  }
  vis.resize(N);

  int cn = 0;  // cn 連結成分の数.
  bool ans = true;
  for (int i = 0; i < N; i++) {
    cout << "uni-c" << endl;
    if (!vis[i]) {
      dfs(i, cn);
      if (vp[cn].first * 2 != vp[cn].second) ans = false;
      cn++;
      vp.push_back(pair(0, 0));
    }
  }
  cout << ans << "\n";
}
