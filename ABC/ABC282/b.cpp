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

  vector<string> v(n);

  rep(i, 0, n) { cin >> v[i]; }

  int ans = 0;
  bool flag = true;

  rep(i, 0, n - 1) {
    rep(j, i + 1, n) {
      flag = true;
      rep(k, 0, m) {
        if (v[i][k] == 'x' && v[j][k] == 'x') {
          flag = false;
          break;
        }
      }
      if (flag) {
        ans++;
      }
    }
  }

  cout << ans;
}
