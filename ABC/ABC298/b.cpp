#include <bits/stdc++.h>

#include <atcoder/modint>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;

  vector<vector<int>> a(n, vector<int>(n));
  vector<vector<int>> b(n, vector<int>(n));
  vector<vector<int>> t(n, vector<int>(n));

  rep(i, 0, n) {
    rep(j, 0, n) { cin >> a[i][j]; }
  }
  rep(i, 0, n) {
    rep(j, 0, n) { cin >> b[i][j]; }
  }

  bool flag = false;
  bool wrong = false;
  rep(h, 0, 4) {
    rep(i, 0, n) {  // 重なるか判定
      rep(j, 0, n) {
        if (a[i][j] == 1 && b[i][j] == 0) {
          // cout << "a[" << i << "][" << j << "]で重ならず" << endl;
          wrong = true;
          break;
        }
      }
      if (wrong) break;
    }

    if (wrong) {
      // cout << "回転します" << endl;
      rep(i, 0, n) {  // 回転
        rep(j, 0, n) { t[i][j] = a[n - 1 - j][i]; }
      }
      rep(i, 0, n) {  // 回転
        rep(j, 0, n) { a[i][j] = t[i][j]; }
      }
      wrong = false;
      continue;
    } else {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
}
