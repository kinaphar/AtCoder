#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

vector<vector<int>> e(200010);
deque<int> deq(200010);  //木構造ツアーしながら経路メモ。最終的な中身＝答え。
bool visit[200010];  //初期値falseらしい
bool goal;

int next;

void dfs(int k, int to) {
  // if (!visit[k]) deq.push_back(k);　←間違い
  if (!goal) deq.push_back(k);

  if (k == to) goal = true;

  visit[k] = true;
  // ↑足りなかった

  rep(i, 0, e[k].size()) {
    next = e[k][i];
    if (!visit[next]) dfs(next, to);  // 再帰呼び出しで次の点へ移動
  }

  if (!goal) deq.pop_back;
}

int main() {
  int n, x, y;
  int u, v;
  cin >> n >> x >> y;

  rep(i, 0, n - 1) {
    cin >> u >> v;
    e[u].push_back(v);
    e[v].push_back(u);
  }

  rep(i, 0, 200010) visit[i] = false;
  goal = false;
  dfs(x, y);

  rep(j, 0, deq.size()) {
    cout << deq.front();
    deq.pop_front();
    if (deq.size() != 0) {
      cout << " ";
    } else {
      cout << endl;
    }
  }
}
