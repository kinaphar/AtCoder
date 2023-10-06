#include <bits/stdc++.h>

// #include <atcoder/modint>
using namespace std;
typedef long long ll;
using Graph = vector<vector<int>>;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;

#define OVERLOAD_REP(_1, _2, _3, name, ...) name
#define REP1(i, n) for (auto i = std::decay_t<decltype(n)>{}; (i) != (n); ++(i))
#define REP2(i, l, r) for (auto i = (l); (i) != (r); ++(i))
#define rep(...) OVERLOAD_REP(__VA_ARGS__, REP2, REP1)(__VA_ARGS__)

int main() {
  ll n, m, a, b, x, y;  // n人, 情報m個.
  cin >> n >> m;

  map<pair<ll, ll>, pair<ll, ll>> info;  // 情報;
  Graph rel(n + 1);  // ある人について、関連情報がある人の番号;
  vector<ll> visit(n + 1);
  vector<pair<ll, ll>> pos(n + 1);  // xy座標;

  rep(i, 0, m) {
    cin >> a >> b >> x >> y;
    pair<ll, ll> men = make_pair(a, b);
    pair<ll, ll> relpos = make_pair(x, y);
    info[men] = relpos;
    men = make_pair(b, a);
    relpos = make_pair(-1 * x, -1 * y);
    info[men] = relpos;

    rel[a].push_back(b);
    rel[b].push_back(a);
  }

  pos[1] = make_pair(0, 0);
  visit[1] = 1;

  queue<ll> que;
  que.push(1);

  // BFS 開始 (キューが空になるまで探索を行う)
  while (!que.empty()) {
    ll v = que.front();  // キューから先頭頂点を取り出す
    que.pop();

    // v から辿れる頂点をすべて調べる
    for (ll nv : rel[v]) {
      if (visit[nv] != 0) continue;  // すでに発見済みの頂点は探索しない
      visit[nv] = 1;
      pos[nv].first = pos[v].first + info[{v, nv}].first;
      pos[nv].second = pos[v].first + info[{v, nv}].second;
      que.push(nv);
    }
  }

  rep(i, 1, n + 1) {
    if (visit[i] == 0) {
      cout << "undecidable" << endl;
    } else {
      cout << pos[i].first << " " << pos[i].second << endl;
    }
  }
}
