#include <bits/stdc++.h>

#include <atcoder/modint>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

// //
// グラフ、頂点の入次数、頂点数を受け取り、そのトポロジカルソートを記録した配列を返す関数
// vector<int> topological_sort(vector<vector<int>> &G, vector<int> &indegree,
//                              int V) {
//   // トポロジカルソートを記録する配列
//   vector<int> sorted_vertices;

//   // 入次数が0の頂点を発見したら、処理待ち頂点としてキューに追加する
//   queue<int> que;
//   for (int i = 0; i < V; i++) {
//     if (indegree[i] == 0) {
//       que.push(i);
//     }
//   }

//   // キューが空になるまで、操作1~3を繰り返す
//   while (que.empty() == false) {
//     // キューの先頭の頂点を取り出す
//     int v = que.front();
//     que.pop();

//     // その頂点と隣接している頂点の入次数を減らし、0になればキューに追加
//     for (int i = 0; i < G[v].size(); i++) {
//       int u = G[v][i];
//       indegree[u] -= 1;
//       if (indegree[u] == 0) que.push(u);
//     }
//     // 頂点vを配列の末尾に追加する
//     sorted_vertices.push_back(v);
//   }

//   // トポロジカルソートを返す
//   return sorted_vertices;
// }

int main(void) {
  int N;
  cin >> N;
  // 頂点数と辺の本数
  int V = N;
  int E = N;

  string s, t;

  vector<int, vector<string>> I(N, vector<string>(2));
  map<string, int> M;
  for (int i = 0; i < E; i++) {
    cin >> s >> t;
    I[i][0] = s;
    I[i][1] = t;
    M[s] = i;
  }

  // 隣接リストにより表現されるグラフ
  vector<vector<int>> G(V);
  // 頂点の入次数を記録する配列
  vector<int> indegree(V);
  for (int i = 0; i < E; i++) {
    G[M[I[i][0]]].push_back(M[I[i][1]]);
    indegree[M[I[i][1]]] += 1;
  }

  // // トポロジカルソートする
  // vector<int> sorted_vertices = topological_sort(G, indegree, V);

  // // トポロジカルソートを出力
  // for (int i = 0; i < sorted_vertices.size(); i++) {
  //   cout << sorted_vertices[i] << endl;
  // }

  // return 0;
}