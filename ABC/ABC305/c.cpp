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
  string tmp;

  vector<vector<char>> v(h, vector<char>(w));

  rep(i, 0, h) {
    rep(j, 0, w) { cin >> v[i][j]; }
  }

  vector<int> rowsum(h);
  vector<int> colsum(w);

  rep(i, 0, h) {
    rep(j, 0, w) {
      if (v[i][j] == '#') {
        rowsum[i]++;
        colsum[j]++;
      }
    }
  }

  // cout << rowsum[3] << endl;

  int rowmin = 1000;
  int ans_i;
  rep(i, 0, h) {
    if (rowsum[i] != 0) {
      if (rowsum[i] < rowmin) {
        rowmin = rowsum[i];
        ans_i = i;
      }
    }
  }

  int colmin = 1000;
  int ans_j;
  rep(j, 0, w) {
    if (colsum[j] != 0) {
      if (colsum[j] < colmin) {
        colmin = colsum[j];
        ans_j = j;
        // cout << ans_j << endl;
      }
    }
  }

  cout << ans_i + 1 << " " << ans_j + 1 << endl;
}
