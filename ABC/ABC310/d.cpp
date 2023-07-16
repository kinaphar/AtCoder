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

int p = 0;  // パターン数.

void dfs(const Graph G, int i, int tmax, int t, int m) {
  if (i + 1 == m) {
  }

  dfs(G, )

      return p;
}

int main() {
  int n, t, m, a, b;
  cin >> n >> t >> m;

  Graph G(m + 1);

  rep(i, m) {
    cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  dfs(G, 1, 1, t, m);

  cout << p << endl;
}
