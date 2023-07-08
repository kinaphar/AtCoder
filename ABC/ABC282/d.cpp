#include <bits/stdc++.h>

#include <atcoder/modint>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int n, m;
  cin >> n >> m;

  int a[n + 1][0];

  int t1, t2;
  rep(i, 0, m) {
    cin >> t1 >> t2;
    a[t1].push_back(t2);
    a[t2].push_back(t1);
  }

  vector<int> dist(n + 1, -1);
  queue<int> que;

  int bw = 0;

  vector<int> v(2);  // グループ内の白黒数

  bool flag = true;  // 矛盾せず続けられるか

  int ans = 0;  // 答え

  rep(i, 1, n + 1) {
    if (dist[i] != -1) continue;

    dist[i] = 0;  // 「0」=黒、「1」=白
    que.push(i);

    while (!que.empty()) {
      int v = que.front();
      que.pop;
      bw = dist[v];
      v[dist[v]]++;

      for (int nv : a[v]) {
        if (dist[nv] == dist[v]) {
          flag = false;
          break;
        }
        if (dist[nv] != -1) continue;

        dist[nv] = (dist[v] + 1) % 2;
        que.push(nv);
      }
    }
    if (flag == false) break;

    dist[i] = 2;  // 2=答えに足すフェーズ
    que.push(i);

    while (!que.empty()) {
      int v = que.front();
      que.pop;

      for (int nv : a[v]) {
        if (dist[nv] == 2) continue;
        que.push(nv);
      }
    }
  }

  if (flag) {
    cout << ans << endl;
  } else {
    cout << 0 << endl;
  }
}
