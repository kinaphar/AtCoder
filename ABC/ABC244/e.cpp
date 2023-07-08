#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  // cin の入力元が 'input.txt' になる
  // std::ifstream in("input.txt");
  // std::cin.rdbuf(in.rdbuf());
  // ----------

  int n, m, k, s, t, x;
  cin >> n >> m >> k >> s >> t >> x;
  vector<vector<int>> data(n);  // 3×0の配列

  int u[m];
  int v[m];

  for (int i = 0; i < m; i++) {
    cin >> u[i] >> v[i];
    data[u[i]].push_back(v[i]);
    data[v[i]].push_back(u[i]);
  }
}
