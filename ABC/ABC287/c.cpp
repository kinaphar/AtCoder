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

  if (n - m != 1) {
    cout << "No" << endl;
    // cout << "辺の本数がおかしい";
    return 0;
  }

  vector<vector<int>> v(n + 1);

  int v1, v2;
  rep(i, 0, m) {
    cin >> v1 >> v2;
    v[v1].push_back(v2);
    v[v2].push_back(v1);
  }

  // rep(i, 1, n + 1) {
  //   rep(j, 0, v[i].size()) { cout << v[i][j] << " "; }
  //   cout << endl;
  // }

  int s = 0;
  int g = 0;
  int c = 0;
  rep(i, 1, n + 1) {
    if (v[i].size() == 1) {
      if (c == 2) {
        cout << "No" << endl;
        // cout << "行き止まり3つ目 @ " << i;
        return 0;
      }
      if (c == 1) {
        g = i;
        c++;
      }
      if (c == 0) {
        s = i;
        c++;
      }
    }
  }

  if (g == 0) {
    cout << "No" << endl;
    // cout << "ゴールがない";
    return 0;
  }

  int p = 0;
  int l = s;
  rep(i, 0, m) {
    // cout << l << endl;
    if (i != 0 && v[l].size() != 2) {
      cout << "No";
      return 0;
    }
    if (v[l][0] != p) {
      p = l;
      l = v[l][0];
    } else {
      p = l;
      l = v[l][1];
    }
  }
  // cout << l << endl;
  if (l == g) {
    cout << "Yes";
  } else {
    cout << "No";
  }
}
