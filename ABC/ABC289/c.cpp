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

  vector<vector<int>> v(m, vector<int>(11));  // いったんこれで書いてみる.

  int c, tmp;
  rep(i, 0, m) {
    cin >> c;
    rep(j, 0, c) {
      cin >> tmp;
      v[i][tmp] = 1;
    }
  }

  int ans = 0;
  int flag = 1;
  int dc = 0;
  for (int i = 0; i < (1 << m); i++) {  // 例. 4ケタなら 0000〜1111.
    bitset<10> s(i);                    // 今回の組み合わせはコレ！.

    flag = 1;
    for (int j = 1; j <= n; j++) {  // 1からnまで含まれてるかチェックしていく.
      dc = 0;                       // digit check.
      for (int k = 0; k < m; k++) {  //[0]〜[m-1]番の集合をチェック.
        if (s.test(k)) {             // 組み合わせに含まれてたら.
          if (v[k][j] == 1) {        // v[k番の集合][ケタj].
            dc = 1;
            break;
          }
        }
      }
      if (dc == 0) {
        flag = 0;
        break;
      }
    }

    if (flag == 1) ans++;
  }

  cout << ans;
}