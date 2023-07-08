#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <queue>
#include <set>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
int n, m;
vector<multiset<int>> g(200009);
vector<bool> passed(200009);
map<int, int> leaf_num;
map<int, int> branch_num;
bool ok = true;
void dfs(int p, int parent, bool is_root) {
  passed[p] = true;
  leaf_num[parent]++;
  branch_num[parent] += g[p].count(p) > 0 ? g[p].count(p) / 2 : 0;
  for (auto x : g[p]) {
    if (passed[x]) continue;
    branch_num[parent] += g[p].count(x);
    // cout << parent << " " << p << " " << x << " " << g[p].count(x) << endl;
    dfs(x, p, false);
  }
  if (is_root) {
    // cout << "check " << parent <<": " << branch_num[parent] << " " <<
    // leaf_num[parent] << endl;
    if (branch_num[parent] != leaf_num[parent]) ok = false;
  }
  return;
}
int main() {
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    g[u].insert(v);
    g[v].insert(u);
  }
  for (int i = 1; i <= n; i++) {
    if (passed[i]) continue;
    dfs(i, i, true);
  }
  if (ok)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}