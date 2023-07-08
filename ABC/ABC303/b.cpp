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

  vector<vector<int>> v(n + 1, vector<int>(n + 1));

  vector<int> pic(n);
  int a, a2;
  rep(j, 0, m) {
    rep(i, 0, n) { cin >> pic[i]; }
    rep(i, 0, n - 1) {
      v[pic[i]][pic[i + 1]] = 1;
      v[pic[i + 1]][pic[i]] = 1;
    }
  }

  int ans = 0;
  rep(i, 1, n + 1) {
    rep(j, 1, i) {
      if (v[i][j] == 0) ans++;
    }
  }

  cout << ans << endl;
}
