#include <bits/stdc++.h>

#include <atcoder/modint>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<int>> v(h, vector<int>(w));

  rep(i, 0, h) {
    rep(j, 0, w) { cin >> v[i][j]; }
  }

  cout << 1 << endl;
}
