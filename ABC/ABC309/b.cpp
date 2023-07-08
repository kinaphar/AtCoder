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
  string tmp;

  vector<vector<int>> v1(n, vector<int>(n));
  vector<vector<int>> v2(n, vector<int>(n));

  rep(i, 0, n) {
    cin >> tmp;
    rep(j, 0, n) { v1[i][j] = tmp[j] - '0'; }
  }

  // 1行目.
  v2[0][0] = v1[1][0];
  rep(j, 1, n) { v2[0][j] = v1[0][j - 1]; }

  // n行目.
  rep(j, 0, n - 1) { v2[n - 1][j] = v1[n - 1][j + 1]; }
  v2[n - 1][n - 1] = v1[n - 2][n - 1];

  // 間.
  rep(i, 1, n - 1) {
    v2[i][0] = v1[i + 1][0];
    rep(j, 1, n - 1) { v2[i][j] = v1[i][j]; }
    v2[i][n - 1] = v1[i - 1][n - 1];
  }

  rep(i, 0, n) {
    rep(j, 0, n) { cout << v2[i][j]; }
    cout << endl;
  }
}
