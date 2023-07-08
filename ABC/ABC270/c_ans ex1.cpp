#include <bits/stdc++.h>
using namespace std;

vector<int> e[200010];
// vector<int[]> ≒ vector<vector<int>>っぽい構造になってる？
bool flag[200010];  //各ノードに訪問済みかどうか
deque<int> deq;     // 探索しながら書き換えていく
bool stop;          // to に到達済みかどうか

// deq
void dfs(int k, int to) {       // 最初: k(=x)=2, to(=y)=5
  if (!stop) deq.push_back(k);  // stop == false なら deqに追加する
  if (k == to) stop = true;     // to に到達したら stop == true
  flag[k] = true;  // 最初: flag = {false, false, true, false, ...}

  // 最初: sz = {1}.size() = 1。　2回目: sz = (2,3).size = 2。
  for (int i = 0; i < e[k].size(); i++) {
    if (!flag[e[k][i]]) dfs(e[k][i], to);
    //行き先e[k][i] false(未訪問)なら　【再帰呼び出し】e[k][i] から to
  }

  // 行き先全部見たけど、to に到達しなかったよ ↓

  if (!stop) deq.pop_back();
  return;
}

int main(void) {
  int n, x, y;
  int u, v;
  cin >> n >> x >> y;  // n=5, x=2からy=5の経路を知りたい

  for (int i = 0; i < n - 1; i++) {
    cin >> u >> v;      // 辺の入力 1 2, 1 3, 3 4, 3 5
    e[u].push_back(v);  // e{0, 2, 0, 0, 0, ...}
    e[v].push_back(u);  // e{0, 2, 1, 0, 0, ...}
  }
  // 完了時:
  // ※0  {0,
  // ※1  (2,3),
  // ※2  (1),
  // ※3  (1,4,5),
  // ※4  (3),
  // ※5  (3)}

  for (int i = 1; i <= n; i++) flag[i] = false;
  // flag = {false, false, ... ,false}
  stop = false;
  dfs(x, y);  //【ここでdfs実行】
  // 完了時: deq = {2, 1, 3, 5} ←こうなれば勝ち

  while (!deq.empty()) {
    cout << deq.front();  // cout << 2
    deq.pop_front();      // deq = {1, 3, 5}
    if (deq.empty())
      cout << endl;
    else
      cout << " ";
  }
  return 0;
}
