#include <bits/stdc++.h>

#include <atcoder/modint>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)
using Graph = vector<vector<int>>;

int main() {
  ll n1, n2, m;
  cin >> n1 >> n2 >> m;
  ll ns = n1 + n2;  // n sum;

  int max1 = 0;
  int max2 = 0;

  Graph G(ns + 1);

  rep(i, 0, m) {
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
    // cout << i << "回目" << endl;
  }

  // for (auto i : G[ns]) {
  //   cout << i << endl;
  // }

  vector<int> dist(ns + 1, -1);  // BFS用. 全頂点を「未訪問」に初期化.
  queue<int> que;

  // -------------------- 島1 --------------------.
  // -------------------- 島1 --------------------.

  dist[1] = 0;            // 初期条件 (頂点 1 を初期ノードとする)
  que.push(1);            // 1 を橙色頂点にする

  while (!que.empty()) {  // BFS 開始 (キューが空になるまで探索を行う).
    int v = que.front();  // キューから先頭頂点を取り出す
    que.pop();

    for (int nv : G[v]) {  // v から辿れる頂点をすべて調べる.
      if (dist[nv] != -1) continue;  // すでに発見済みの頂点は探索しない

      dist[nv] = dist[v] + 1;  // 新たな白色頂点 nv: 距離情報更新, キュー追加.
      que.push(nv);
      max1 = max(max1, dist[nv]);  // 最大値更新
    }
  }

  // -------------------- 島2 --------------------.
  // -------------------- 島2 --------------------.

  dist[ns] = 0;  // 初期条件 (頂点 ns を初期ノードとする)
  que.push(ns);  // ns を橙色頂点にする

  while (!que.empty()) {  // BFS 開始 (キューが空になるまで探索を行う).
    int v = que.front();  // キューから先頭頂点を取り出す
    que.pop();

    for (int nv : G[v]) {  // v から辿れる頂点をすべて調べる.
      if (dist[nv] != -1) continue;  // すでに発見済みの頂点は探索しない

      dist[nv] = dist[v] + 1;  // 新たな白色頂点 nv: 距離情報更新, キュー追加.
      que.push(nv);
      max2 = max(max2, dist[nv]);  // 最大値更新
    }
  }

  // cout << max1 << endl;
  // cout << max2 << endl;
  cout << max1 + max2 + 1;
}
