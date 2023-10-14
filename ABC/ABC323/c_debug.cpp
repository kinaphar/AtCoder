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
  int n, m;
  cin >> n >> m;

  vector<int> a(m);
  rep(i, m) { cin >> a[i]; }

  vector<string> s(n);        // 成績.
  vector<int> vp(n);          // 現在の得点.
  vector<vector<int>> vr(n);  // まだ解いてない問題の点数一覧.
  int mx = 0;

  rep(i, n) {
    cin >> s[i];
    int p = i + 1;  // プレーヤー番号を得点に追加.
    rep(j, m) {  // 【ミス +20分】ここ m を n にしてた、デバッグ完了.
      if (s[i][j] == 'o') {
        p += a[j];
      } else {
        vr[i].push_back(a[j]);
        // cout << a[j] << " ";
      }
    }
    vp[i] = p;
    // cout << vp[i] << " ";
    mx = max(mx, p);
  }

  rep(i, n) {
    int ans = 0;
    sort(vr[i].begin(), vr[i].end(), greater<int>());
    // cout << vr[i].size() << endl;  // デバッグ.
    rep(j, vr[i].size()) {
      // cout << vp[i] << " ";  // デバッグ.
      if (vp[i] > mx) break;
      vp[i] += vr[i][j];
      ans++;
    }
    // //multisetの大きい順for文、終了コード139になる.
    // for (auto j = vr[i].rbegin(), e = vr[i].rend(); j != e; ++j) {
    //   if (vp[i] > mx) break;
    //   vp[i] += *j;
    //   ans++;
    // }
    cout << ans << endl;
  }
}
