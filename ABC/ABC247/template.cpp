#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  // cin の入力元が 'input.txt' になる
  // std::ifstream in("input.txt");
  // std::cin.rdbuf(in.rdbuf());
  // ----------

  int q;
  cin >> q;

  int l, m, n;
  vector<pair<int, int>> data;
  int ind = 0;
  int ans = 0;
  rep(i, 0, q) {
    cin >> l >> m >> n;
    if (l == 1) {
      data.push_back({m, n});
    }
    if (l == 2) {
      ans = 0;
      while (m > 0) {
        if (data[ind].second <= m) {
          ind++;
          ans += data[ind].first * data[ind].second;
        } else {
          data[ind].second -= m;
          ans += data[ind].first * m;
        }
      }
      cout << ans << endl;
    }
  }
}
