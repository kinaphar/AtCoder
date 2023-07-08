#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  vector<string> v(9);
  rep(i, 0, 9) { cin >> v[i]; }

  int ans = 0;

  for (int s = 1; s <= 8; s++) {  // size: 正方形が入るフレームの1辺
    for (int g = 0; g <= s - 1; g++) {  // gradient: 正方形の傾き
      for (int r = 0; r <= 8 - s; r++) {  // row: 正方形の左上 行 タテ座標
        for (int c = 0; c <= 8 - s; c++) {  // column: 正方形の左上 列 ヨコ座標
          if (v[r][c + g] == '#') {
            if (v[r + g][c + s] == '#') {
              if (v[r + s][c + s - g] == '#') {
                if (v[r + s - g][c] == '#') {
                  ans++;
                }
              }
            }
          }
        }
      }
    }
  }

  cout << ans << endl;
}
