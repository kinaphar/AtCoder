#include <bits/stdc++.h>

#include <atcoder/modint>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int n, m, h, k;
  cin >> n >> m >> h >> k;
  string s;
  cin >> s;

  set<pair<int, int>> item;

  int x, y;
  rep(i, 0, m) {
    cin >> x >> y;
    item.insert({x, y});
  }

  // x, yを高橋くんの座標として流用.
  x = 0;
  y = 0;

  string flag = "Yes";

  rep(i, 0, n) {
    switch (s[i]) {
      case 'R':
        x++;
        break;
      case 'L':
        x--;
        break;
      case 'U':
        y++;
        break;
      case 'D':
        y--;
        break;
    }
    h--;
    // cout << "x = " << x << ", y = " << y << ". H = " << h << endl;
    if (h < 0) {
      flag = "No";
      // cout << x << " " << y << "で倒れた" << endl;
      break;
    }

    if (h < k) {
      auto itr = item.find({x, y});
      if (itr != item.end()) {  // endで大丈夫?.
        item.erase(*itr);
        h = k;
        // cout << "回復" << endl;
      }
    }
  }

  cout << flag << endl;
}
